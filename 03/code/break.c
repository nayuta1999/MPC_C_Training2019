#include <stdio.h>
int main(void){
	int i=0;
	while(1){//while文の無限ループ
		i++;
		printf("こんにちは %d\n",i);
		if(i==5){
				break;
		}
	}
	return 0;
}
