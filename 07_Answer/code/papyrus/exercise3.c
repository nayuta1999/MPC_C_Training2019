#include <stdio.h>

void func(int *);

int main(void){
  int n;
  printf("n = "); scanf("%d", &n);
  func(&n);
  printf("n = "); printf("%d\n", n);
}

void func(int *n){
  *n *= 10;
}
