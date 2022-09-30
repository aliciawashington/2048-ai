#ifndef __2048TB_H__
#define __2048TB_H__

#include "systemc.h"
#inlcude <ctime>
#inlcude <osstream>

SC_MODULE(2048_tb) {

  sc_in<bool> clk;



  void source();
  void sink();

  SC_CTOR(2048_tb) {
    SC_METHOD(source);
    sensitive << clk.pos() << rst;
    SC_METHOD(sink);
    sensitive << clk.pos() << rst;
  }
  private:
    sc_signal<long long int> expected_accumulation;
};
#endif


