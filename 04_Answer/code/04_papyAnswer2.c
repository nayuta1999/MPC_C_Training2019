#include <stdio.h>
int main(void){
  int a[10];

  for(int i = 0; i < 10; i++){
    printf("a[%d] = ", i);
    scanf("%d", &a[i]);
  }

  for(int i = 0; i < 10; i++){
    if(a[i] % 3 == 0){
      printf("%d ", a[i]);
    }
  }
  printf("\n");

  return 0;
}
