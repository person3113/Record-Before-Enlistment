#define LinkedList_DEF
#include "DoublyLinkedList.h"

int main(){
  initialize();

  add(1,1);
  add(2,2);
  add(3,3);
  add(4,4);
  traverse();

  set(3,9);
  printf("삭제한 rank 2의 값 = %d\n",delete(2));
  printf("rank 2의 값 = %d\n",get(2));
  traverse();

  //header 노드를 제외하고, 처음부터 trailer 노드 끝까지 while문 안에서 노드 메모리를 해제
  Node *curr=head->next;
  for(int i=0;i<n+1;i++){
    Node *next=curr->next;
    free(curr);
    curr=next;
  }
  free(head);

  return 0;
}
