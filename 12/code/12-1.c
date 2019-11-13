#include<stdio.h>

int main(){
    double a,b;
    a=3.0;
    b=5.0;
    /*aをint型にキャストすることにより方が変わるため
    フォーマット指定子や表示が変わる*/
    printf("%d %lf",(int)a,b);
    return 0;
}