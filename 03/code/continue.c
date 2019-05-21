#include <stdio.h>
int main(void){
	int i=0;
	for(i=0;i<5;i++){
		if(i==3){
				continue;
		}
		printf("%d\n",i);
	}
	return 0;
}
