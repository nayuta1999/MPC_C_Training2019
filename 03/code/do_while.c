#include <stdio.h>
int main(void){
	int i=0;
	do{
			printf("あなたは今日何を食べたいですか？1:カレー,2:定食\n");
			scanf("%d",&i);
			if(i==1){
					printf("そんなあなたにはSAINOがおすすめ!\n");
			}	
			else if(i==2){
					printf("そんなあなたにはもっちゃんがおすすめ!\n");
			}
			else{
					printf("1か2を入力してください\n");
			}
	}while(i!=1 && i!=2);//最後にセミコロン必要
	return 0;
}
