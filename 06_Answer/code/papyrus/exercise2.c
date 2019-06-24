#include <stdio.h>

double power(double a, int n);

int main(void){
  double a;
  int n;
  printf("a = "); scanf("%lf", &a);
  printf("n = "); scanf("%d", &n);

  printf("%fの%d乗は%fです\n", a, n, power(a, n));
}

double power(double a, int n){
  double ans = a;
  if(n == 0){
    return 1.0;
  }
  
  for(int i = 0; i < n - 1; i++){
    ans = ans * a;
  }
  return ans;
}
