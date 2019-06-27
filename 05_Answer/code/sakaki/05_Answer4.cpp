#include<stdio.h>

int main(void){
	double x,y,h;
	scanf("%lf%lf%lf",&x,&y,&h);
	
	printf("%lf",(x+y)*h/2);
	
	return 0;
}