/*
  Morse.h - Library for flashing Morse code.
  Created by David A. Mellis, November 2, 2007.
  Released into the public domain.
*/
#ifndef Morse_h
#define Morse_h

#include "Arduino.h"

class Morse
{
  public:
    Morse(int pin);
    void a();
    void b();
    void c();
    void d();
    void e();
    void f();
    void g();
    void h();
    void i();
    void j();
    void k();
    void l();
    void m();
    void n();
    void o();
    void p();
    void q();
    void r();
    void s();
    void t();
    void u();
    void v();
    void w();
    void x();
    void y();
    void z();
    void A();
    void B();
    void C();
    void D();
    void E();
    //void F(); Even after being rewritten, the F continues to give an error in the Arduino, but the rest of the code is correct and runs
    void G();
    void H();
    void I();
    void J();
    void K();
    void L();
    void M();
    void N();
    void O();
    void P();
    void Q();
    void R();
    void S();
    void T();
    void U();
    void V();
    void W();
    void X();
    void Y();
    void Z();
  private:
    int _pin;
};

#endif
