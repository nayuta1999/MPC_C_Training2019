#include<stdio.h>

int main(void){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);

	if(a+b==c){
		printf("SAINO\n");
	}
	
	if(a-b==c){
		printf("もっちゃん\n");
	}

	if(a*b==c){
		printf("ロブジェ");
	}
	
	if(b!=0){
		if(a/b==c){
			printf("チャイナ");
		}
	}

	return 0;
}
