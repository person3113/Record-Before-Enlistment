#include "ArrayList.h"

int main(void){
  ArrayListType list;
  initialize(&list);

  for(int i=0;i<N;i++)
    add(&list,i,i);
  traverse(&list);

  printf("rank 0의 값 %d를 지움\n",delete(&list,0));
  printf("rank 0의 값 = %d\n",get(&list,0));

  return 0;
}
