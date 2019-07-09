#include <stdio.h>

void viewArray(int a[]);

int main(void){
  int a[5];
  for(int i = 0; i < 5; i++){
    printf("a[%d] = ", i);
    scanf("%d", &a[i]);
  }
  printf("\n");
  viewArray(a);
}

void viewArray(int a[]){
  for(int i = 0; i < 5; i++){
    printf("a[%d] = %d\n", i, a[i]);
  }
}
