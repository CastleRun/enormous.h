/*
enormous.h by CastleRun
Pre-Alpha
*/

#include <limits.h>
#include <math.h>
#define HALF ((unsigned int) (pow((2), (16)) - (1)))

typedef enum { false, true } bool;
typedef struct{
  unsigned int i;
  bool c;
} iwc;
typedef struct{
   unsigned int i;
   unsigned int c;
} ipwc;
typedef struct{
  unsigned int i[16];
} enormous;

unsigned short splitInt(unsigned int n, bool high){
   unsigned short s = n % (HALF + 1);
   if(high){
      return n - (unsigned int) s;
   }else{
      return s;
   }
}
iwc awc(unsigned int a, unsigned int b, bool ci){
  iwc c;
  c.c = 0;
  if(b > ~a){
    c.c = true;
    if(a >= b){
      a -= HALF;
    }else{
      b -= HALF;
    }
  }
  c.i = a + b;
  if(ci){
    if(c.i = UINT_MAX){
      c.i = 0;
      c.c = ci;
    }else{
      c.c += ci;
    }
  }
  return c;
}
iwc itoiwc(unsigned int i){
   iwc a;
   a.i = i;
   a.c = 0;
   return a;
}
enormous add(enormous a, enourmous b){
  enormous c;
  iwc d;
  bool ci = 0
  int i;
  for(i = 0; i <16){
     d = awc(itoiwc(a),itoiwc(b));
     c.i[i] = d.i;
     ci = d.c;
  }
  return c;
}
