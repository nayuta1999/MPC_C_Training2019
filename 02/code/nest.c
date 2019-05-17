#include <stdio.h>
int main(void){
	int score;
	printf("点数を入力してください\n");
	scanf("%d",&score);
	if(60<=score){
		if(score<=100){
			printf("あなたは合格です");
		}
	}
	else printf("あなたは不合格です");
	return 0;
}
