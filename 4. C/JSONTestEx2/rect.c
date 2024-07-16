#include <stdio.h>
#include "rect.h"
#define DEBUG

double calc_area(const RECT *r){
  double area;
  area=r->x*r->y;
  #ifdef DEBUG
    printf("calc_area() = %f\n",area);
  #endif
    return area;
}
