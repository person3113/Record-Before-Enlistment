#ifndef LinkedList_H
#define LinkedList_H

#include <stdio.h>
#include <stdlib.h>

typedef struct node{
  struct node *prev;
  int element;
  struct node *next;
} Node;

/* 
  LinkedList_DEF가 정의되어 있을 때: "Node *head, *tail;" 와 "int n"을 선언함

  LinkedList_DEF가 정의되어 있지 않을 때: EXT는 extern으로 치환 되기 때문에 정의 되어 있는 head, tail, n을 찾아 가게 된다.*/
#ifdef LinkedList_DEF
#define EXT
#else
#define EXT extern
#endif
EXT Node *head, *tail; //dummy nodes
EXT int n; //n: current number of nodes 

void error(char *message);
Node* getNode();
void initialize();
void add(int r,int e);
int delete(int r);
int get(int r);
void set(int r, int e);
void traverse();

#endif