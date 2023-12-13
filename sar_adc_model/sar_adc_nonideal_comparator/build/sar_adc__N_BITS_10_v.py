
#=========================================================================
# Vsar_adc__N_BITS_10_v.py
#=========================================================================
"""Provide a template of PyMTL wrapper to import verilated models.

This wrapper makes a Verilator-generated C++ model appear as if it were a
normal PyMTL model. This template is based on PyMTL v2.
"""

import os

from cffi import FFI

from pymtl3.datatypes import *
from pymtl3.dsl import Component, connect, InPort, OutPort, Wire, update, update_ff

#-------------------------------------------------------------------------
# sar_adc__N_BITS_10
#-------------------------------------------------------------------------

class sar_adc__N_BITS_10( Component ):
  id_ = 0

  def __init__( s, *args, **kwargs ):
    s._finalization_count = 0

    # initialize FFI, define the exposed interface
    s.ffi = FFI()
    s.ffi.cdef("""
      typedef struct {

        // Exposed port interface
        unsigned char * clk;        
        unsigned char * eoc;        
        unsigned char * input_hold_digital;        
        unsigned short * input_voltage_real;        
        unsigned short * output_result_digital;        
        unsigned char * reset;        
        unsigned char * sys_clk;

        // Verilator model
        void * model;

      } Vsar_adc__N_BITS_10_t;

      Vsar_adc__N_BITS_10_t * create_model( const char * );
      void destroy_model( Vsar_adc__N_BITS_10_t *);
      void comb_eval( Vsar_adc__N_BITS_10_t * );
      void seq_eval( Vsar_adc__N_BITS_10_t * );
      void assert_en( bool en );
      

    """)

    # Print the modification time stamp of the shared lib
    # print 'Modification time of {}: {}'.format(
    #   'libsar_adc__N_BITS_10_v.so', os.path.getmtime( './libsar_adc__N_BITS_10_v.so' ) )

    # Import the shared library containing the model. We defer
    # construction to the elaborate_logic function to allow the user to
    # set the vcd_file.
    s._ffi_inst = s.ffi.dlopen('./libsar_adc__N_BITS_10_v.so')

    # increment instance count
    sar_adc__N_BITS_10.id_ += 1

  def finalize( s ):
    """Finalize the imported component.

    This method closes the shared library opened through CFFI. If an imported
    component is not finalized explicitly (i.e. if you rely on GC to collect a
    no longer used imported component), importing a component with the same
    name before all previous imported components are GCed might lead to
    confusing behaviors. This is because once opened, the shared lib
    is cached by the OS until the OS reference counter for this lib reaches
    0 (you can decrement the reference counter by calling `dl_close()` syscall).

    Fortunately real designs tend to always have the same shared lib corresponding
    to the components with the same name. If you are doing translation testing and
    use the same component class name even if they refer to different designs,
    you might need to call `imported_object.finalize()` at the end of each test
    to ensure correct behaviors.
    """
    assert s._finalization_count == 0,      'Imported component can only be finalized once!'
    s._finalization_count += 1
    s._ffi_inst.destroy_model( s._ffi_m )
    s.ffi.dlclose( s._ffi_inst )
    s.ffi = None
    s._ffi_inst = None

  def __del__( s ):
    if s._finalization_count == 0:
      s._finalization_count += 1
      s._ffi_inst.destroy_model( s._ffi_m )
      s.ffi.dlclose( s._ffi_inst )
      s.ffi = None
      s._ffi_inst = None

  def construct( s, *args, **kwargs ):
    # Set up the VCD file name
    verilator_vcd_file = ""
    if 0:
      if False:
        verilator_vcd_file = ".verilator1.vcd"
      else:
        verilator_vcd_file = "sar_adc__N_BITS_10.verilator1.vcd"

    # Convert string to `bytes` which is required by CFFI on python 3
    verilator_vcd_file = verilator_vcd_file.encode('ascii')

    # Construct the model
    s._ffi_m = s._ffi_inst.create_model( s.ffi.new("char[]", verilator_vcd_file) )

    # Buffer for line tracing
    s._line_trace_str = s.ffi.new('char[512]')
    s._convert_string = s.ffi.string

    # Use non-attribute varialbe to reduce CPython bytecode count
    _ffi_m = s._ffi_m
    _ffi_inst_comb_eval = s._ffi_inst.comb_eval
    _ffi_inst_seq_eval  = s._ffi_inst.seq_eval

    # declare the port interface
    s.eoc = OutPort( Bits1 )
    s.input_hold_digital = InPort( Bits1 )
    s.input_voltage_real = InPort( Bits10 )
    s.output_result_digital = OutPort( Bits10 )
    s.sys_clk = InPort( Bits1 )

    # update blocks that converts ffi interface to/from pymtl ports
    
    s.s_DOT_input_hold_digital = Wire( Bits1 )
    @update
    def isignal_s_DOT_input_hold_digital():
      s.s_DOT_input_hold_digital @= s.input_hold_digital
    
    s.s_DOT_input_voltage_real = Wire( Bits10 )
    @update
    def isignal_s_DOT_input_voltage_real():
      s.s_DOT_input_voltage_real @= s.input_voltage_real
    
    s.s_DOT_reset = Wire( Bits1 )
    @update
    def isignal_s_DOT_reset():
      s.s_DOT_reset @= s.reset
    
    s.s_DOT_sys_clk = Wire( Bits1 )
    @update
    def isignal_s_DOT_sys_clk():
      s.s_DOT_sys_clk @= s.sys_clk
    
    s.s_DOT_eoc = Wire( Bits1 )
    @update
    def osignal_s_DOT_eoc():
      s.eoc @= s.s_DOT_eoc
    
    s.s_DOT_output_result_digital = Wire( Bits10 )
    @update
    def osignal_s_DOT_output_result_digital():
      s.output_result_digital @= s.s_DOT_output_result_digital

    @update
    def comb_upblk():

      # Set inputs
      
      _ffi_m.input_hold_digital[0] = int(s.s_DOT_input_hold_digital)
      
      _ffi_m.input_voltage_real[0] = int(s.s_DOT_input_voltage_real)
      
      _ffi_m.reset[0] = int(s.s_DOT_reset)
      
      _ffi_m.sys_clk[0] = int(s.s_DOT_sys_clk)

      _ffi_inst_comb_eval( _ffi_m )

      # Write all outputs
      
      s.s_DOT_eoc @= _ffi_m.eoc[0]
      
      s.s_DOT_output_result_digital @= _ffi_m.output_result_digital[0]

    @update_ff
    def seq_upblk():
      # seq_eval will automatically tick clock in C land
      _ffi_inst_seq_eval( _ffi_m )

  def assert_en( s, en ):
    # TODO: for verilator, any assertion failure will cause the C simulator
    # to abort, which results in a Python internal error. A better approach
    # is to throw a Python exception at the time of assertion failure.
    # Verilator allows user-defined `stop` function which is called when
    # the simulation is expected to stop due to various reasons. We might
    # be able to raise a Python exception through Python C API (although
    # at this moment I'm not sure if the C API's are compatible between
    # PyPy and CPython).
    assert isinstance( en, bool )
    s._ffi_inst.assert_en( en )

  def line_trace( s ):
    if 0:
      s._ffi_inst.trace( s._ffi_m, s._line_trace_str )
      return s._convert_string( s._line_trace_str ).decode('ascii')
    else:
      return f' clk={s.clk}, eoc={s.eoc}, input_hold_digital={s.input_hold_digital}, input_voltage_real={s.input_voltage_real}, output_result_digital={s.output_result_digital}, reset={s.reset}, sys_clk={s.sys_clk},'

  def internal_line_trace( s ):
    return ''
