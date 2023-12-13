##Model-Checking of a SAR-ADC

Warning, running this project installs a bunch of stuff and many of the tools require severely long runtimes (>12hrs).

For reproducability, we provide a Dockerfile. If you run the dockerfile, it will automatically install all dependencies and check two models:

Install Dependenices (~30 min)

3-bit ideal SAR-ADC (~9 min)

2-bit nonideal SAR-ADC (~2 hr)

All modeling files are also included, but not configured to automatically get reproduced.

Run these commands to reproduce the project!

```
git clone https://github.com/wrs225/257-final-project.git
cd 257-final-project
docker build -t smtmodelcheck . --network=host
```

(Yes I know the docker setup may be amateur, but please bear with me)
