#include "ArrayList.h"

void error(char *message){
  fprintf(stderr,"%s\n",message);
  exit(1);
}

void initialize(ArrayListType *L){
  L->n=0;
}

void add(ArrayListType *L,int r,int e){
  if(L->n==N)
    error("FullListException");
  if(r<0||r>L->n)
    error("InvalidRankException");

  for(int i=L->n-1;i>=r;i--)
    L->Arr[i+1]=L->Arr[i];

  L->Arr[r]=e;

  L->n++;
}

int delete(ArrayListType *L,int r){
  if(r<0||r>=L->n)
    error("InvalidRankException");

  int e=L->Arr[r];

  for(int i=r;i<L->n-1;i++)
    L->Arr[i]=L->Arr[i+1];
  
  L->n--;

  return e;
}

int get(ArrayListType *L,int r){
  if(r<0||r>=L->n)
    error("InvalidRankException");

  return L->Arr[r];
}

void set(ArrayListType *L,int r,int e){
  if(r<0||r>=L->n)
    error("InvalidRankException");

  L->Arr[r]=e;
}

void traverse(ArrayListType *L){
  for(int i=0;i<L->n;i++)
    printf("rank %d = %d\n", i, L->Arr[i]);
}