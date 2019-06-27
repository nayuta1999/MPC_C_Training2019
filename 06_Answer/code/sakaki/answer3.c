#include<stdio.h>

double SUM(double a,double b);

int main(void){
	
	double x,y;
	scanf("%lf%lf",&x,&y);
	
	printf("%lf\n",SUM(x,y));

	return 0;
}

double SUM(double a,double b){
	return a+b;
}