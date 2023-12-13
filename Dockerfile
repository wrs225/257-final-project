# Use Ubuntu 22.04 as the base image
FROM ubuntu:22.04

# Avoid prompts from apt
ENV DEBIAN_FRONTEND=noninteractive

# Update apt and install required packages
RUN apt-get update && apt-get install -y \
    build-essential clang bison flex \
    libreadline-dev gawk tcl-dev libffi-dev git \
    graphviz xdot pkg-config python3 zlib1g-dev \
    python3-pip curl cmake \
    && rm -rf /var/lib/apt/lists/*

RUN apt-get update

# Install Python click package
RUN python3 -m pip install click
RUN python3 -m pip install pymtl3
RUN python3 -m pip install pythams

# Clone and install Yosys
RUN git clone https://github.com/YosysHQ/yosys \
    && cd yosys \
    && make -j$(nproc) \
    && make install

# Clone and install SymbiYosys
RUN git clone https://github.com/YosysHQ/sby \
    && cd sby \
    && make install

# Clone and install Boolector
RUN git clone https://github.com/boolector/boolector \
    && cd boolector \
    && ./contrib/setup-btor2tools.sh \
    && ./contrib/setup-lingeling.sh \
    && ./configure.sh \
    && make -C build -j$(nproc) \
    && ls \
    && ls build/bin/ \ 
    && cp build/bin/boolector /usr/local/bin/ \
    && cp build/bin/btor* /usr/local/bin/ 
#&& cp deps/btor2tools/bin/btorsim /usr/local/bin/


RUN apt-get install -y software-properties-common
# Clone and install Yices2
RUN add-apt-repository ppa:sri-csl/formal-methods \
    && apt-get update \ 
    && apt-get install -y yices2

# Set the working directory in the container
WORKDIR /usr/src/app

# Clone your project repository
RUN git clone https://github.com/wrs225/257-final-project.git

# Change the working directory to the cloned repository
WORKDIR /usr/src/app/257-final-project

# Install Python packages (if the repository has requirements.txt)
# RUN pip3 install -r requirements.txt

# Expose any necessary ports (if your app needs it)
# EXPOSE 5000

# Define environment variable (optional)
# ENV NAME Value

# Command to run on container start (modify this according to your needs)

RUN apt-get install -y gtkwave

RUN ls \ 
    && cd sar_adc_ideal_sby \ 
    && ls \ 
    && sby -f sar_adc_ideal.sby


RUN ls \ 
    && cd sar_adc_nonideal_sby \ 
    && ls \
    && sby -f sar_adc_nonideal.sby
