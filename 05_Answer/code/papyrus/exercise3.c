#include <stdio.h>
int main(void){
  int n, a, b, c;
  int count = 0;

  printf("n = "); scanf("%d", &n);
  printf("a = "); scanf("%d", &a);
  printf("b = "); scanf("%d", &b);
  printf("c = "); scanf("%d", &c);

  for(int i = 0; n >= 20 && i < c; i++){
    n -= 20;
    count++;
  }
  for(int i = 0; n >= 50 && i < b; i++){
    n -= 50;
    count++;
  }
  for(int i = 0; n >= 100 && i < a; i++){
    n -= 100;
    count++;
  }

  printf("%d\n", count);
  return 0;
}
