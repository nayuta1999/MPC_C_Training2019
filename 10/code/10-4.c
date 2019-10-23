#include<stdio.h>

typedef enum _day{
    SUN,
    MON,
    TUE,
    WED,
    THU,
    FRI,
    SAT,
}day;

int main(){
    printf("%d %d %d %d %d %d %d\n",SUN,MON,TUE,WED,THU,FRI,SAT);

    return 0;
}