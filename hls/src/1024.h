#ifndef __2048_H__
#define __2048_H__

#include "systemc.h"

SC_MODULE(mac) {
  sc_in<bool> clk;
  sc_in<bool> rst;
  sc_in<int> in_data;
  sc_in<char> in_coeff;
  sc_out<long long int> out_data;

  // void beh();
 // SC_CTOR(mac) {
 //   SC_METHOD(beh);
 //   sensitive << clk.pos() << rst;
 // }

 // private:
 //   long long int accumulation;
}; 

#endif
