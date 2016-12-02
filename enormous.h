/*
enormous.h by CastleRun
Pre-Alpha
*/

#include <limits.h>
#include <math.h>
#define HALF ((int) (pow((2), (16)) - (1)))
#define max(a,b) \
   ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
     _a > _b ? _a : _b; })

typedef enum { false, true } bool;
typedef struct{
  int i;
  bool c;
} iwc;
typedef struct{
  unsigned int i[16];
} enormous;

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
enormous add(enormous a, enourmous b){
  //Not finished
}
