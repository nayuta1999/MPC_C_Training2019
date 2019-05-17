#include<stdio.h>

int main(void){
	
	for(int i=1;i<=9;i++){
		for(int j=1;j<=9;j++){
			if(i<j){continue;}//continue‚Å‚È‚­Abreak‚Å‚à—Ç‚¢B(Œë·‚Ì”ÍˆÍ‚¾‚ªA­‚µ‚¾‚¯break‚Ì•û‚ª‘‚¢)
			printf("%3d",i*j);
		}
		printf("\n");
	}
	
	return 0;
}