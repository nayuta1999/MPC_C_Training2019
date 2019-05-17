#include <stdio.h>
int main(void){
	int grade;
	printf("あなたの評価を入力してください\n");
	scanf("%d",&grade);
	switch(grade){
		case 0:
			printf("頑張りましょう\n");
			break;
		case 1:
			printf("単位は取れましたね\n");
			break;
		case 2:
			printf("そこそこ頑張りました\n");
			break;
		case 3:
			printf("とても頑張りましたね\n");
			break;
		case 4:
			printf("すごく頑張りましたね!!\n");
			break;
		default:
			printf("入力が間違っています\n");
	}
	return 0;
}	
