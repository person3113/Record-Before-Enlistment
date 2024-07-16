#include <stdio.h>
#include "rect.h"

int main(void)
{
  RECT r={3, 5};
  int area= calc_area(&r);
  printf("printed in main.c = %d\n",area);

  return 0;
}
