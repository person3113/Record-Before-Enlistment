#include <stdio.h>
#include <stdlib.h>
#define N 10 //N: Max List Size

typedef struct {
  int Arr[N];
  int n;  //n: current list size
} ArrayListType;

void error(char *message);
void initialize(ArrayListType *L);
void add(ArrayListType *L,int r,int e);
int delete(ArrayListType *L,int r);
int get(ArrayListType *L,int r);
void set(ArrayListType *L,int r,int e);
void traverse(ArrayListType *L);