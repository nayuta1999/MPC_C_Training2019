#include <stdio.h>

int max(int a, int b);

int main(void){
  int a, b;
  printf("a = "); scanf("%d", &a);
  printf("b = "); scanf("%d", &b);
  printf("最大値は%dです\n", max(a, b));
}

int max(int a, int b){
  //return (a < b)? b : a;
  if(a < b){
    return b;
  }else{
    return a;
  }
}
