#include<stdio.h>

int main(void){
	double population=5500;
	int answer=0;
	
	while(population<7000000000){
		population*=1.3;
		answer++;
	}
	
	printf("answer=%d.\n",answer);
	
	return 0;
}