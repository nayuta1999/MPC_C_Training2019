#include <stdio.h>

void func(int a[], int n);

int main(void){
  int n;
  printf("配列の要素数n = "); scanf("%d", &n);
  int a[n];

  for(int i = 0; i < n; i++){
    printf("a[%d] = ", i); scanf("%d", &a[i]);
  }
  func(a, n);

  printf("変換後\n");
  for(int i = 0; i < n; i++){
    printf("a[%d] = %d\n", i, a[i]);
  }
}

void func(int a[], int n){
  for(int i = 0; i < n / 2; i++){
    int tmp = a[i];
    a[i] = a[n - i - 1];
    a[n - i - 1] = tmp;
  }
}
