#include <stdio.h>
int main(void){
	int score;
	printf("今回のあなたの点数は?\n");
	scanf("%d",&score);
	if(60<=score && 100>=score){
		printf("あなたは合格です．\n");
	}
	else printf("あなたは不合格です．\n");
	return 0;
}
