#include "DoublyLinkedList.h"

void error(char *message){
  fprintf(stderr,"%s\n",message);
  exit(1);
}

Node* getNode(){
  Node *node = (Node*)malloc(sizeof(Node));
  return node;
}

void initialize(){
  head=getNode(); //header
  tail=getNode();  //traier

  head->next=tail;
  tail->prev=head;

  n=0;
}

void add(int r,int e){
  if(r<1||r>n+1)
    error("InvalidRankException");

  // 입력받은 r(=rank)을 가르키는 포인터 변수 p를 설정한다.
  Node *p=head;
  for(int i=1;i<=r;i++)
    p=p->next;
  
  //addNodeBefore: add new node(=q) before selected node(=p)
  Node *q=getNode();
  q->element=e;
  q->prev=p->prev;
  q->next=p;

  (p->prev)->next=q;
  p->prev=q;

  n++;
}

int delete(int r){
  if(r<1||r>n)
    error("InvalidRankException");

  Node *p=head;
  for(int i=1;i<=r;i++)
    p=p->next;

  //deleteNode: delete selected node(=p)
  int e=p->element;

  (p->prev)->next=p->next;
  (p->next)->prev=p->prev;

  free(p);
  n--;

  return e;
}

int get(int r){
  if(r<1||r>n)
    error("InvalidRankException");

  Node *p=head;
  for(int i=1;i<=r;i++)
    p=p->next;
  
  return p->element;
}

void set(int r, int e){
  if(r<1||r>n)
    error("InvalidRankException");

  Node *p=head;
  for(int i=1;i<=r;i++)
    p=p->next;
  
  p->element=e;
}

void traverse(){
  Node *p=head->next;
  
  while(p!=tail){
    printf("%d\n",p->element);
    p=p->next;
  }
}