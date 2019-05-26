#include <stdio.h>
int main(void){
  int a, b;
  printf("a = "); scanf("%d", &a);
  printf("b = "); scanf("%d", &b);

  if((a * 0.4) + (b * 0.6) >= 59.1){
    printf("pass\n");
  }else{
    printf("fail\n");
  }
  return 0;
}
