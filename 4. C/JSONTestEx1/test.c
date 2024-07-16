#include <stdio.h>
#include "math.h"

int main(int argc, char const *argv[])
{
  int x,y;
  x=sum(1,2);
  y=sub(1,2);

  printf("sum: %d\n",x);
  printf("sub: %d\n",y);
  return 0;
}
