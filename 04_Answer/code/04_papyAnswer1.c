#include <stdio.h>
int main(void){
  int a[10];

  for(int i = 0; i < 10; i++){
    printf("a[%d] = ", i);
    scanf("%d", &a[i]);
  }

  for(int i = 9; i >= 0; i--){
    printf("a[%d] = %d\n", i, a[i]);
  }

  return 0;
}
