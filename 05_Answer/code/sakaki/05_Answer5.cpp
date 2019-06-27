#include<stdio.h>

int main(void){
	int n;
	scanf("%d",&n);
	
	if(2<=n&&n<=4){
		printf("spring");
	}
	else if(5<=n&&n<=7){
		printf("summer");
	}
	else if(8<=n&&n<=10){
		printf("autumn");
	}
	else if(n==1||(11<=n&&n<=12)){
		printf("winter");
	}
	else{
		printf("error");
	}
	
	
	return 0;
}