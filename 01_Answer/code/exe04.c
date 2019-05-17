#include <stdio.h>
int main(void){
	double height,ceiling,bottom;
	printf("上底，下底，高さの順番で入力してください\n");
	scanf("%lf",&ceiling);
	scanf("%lf",&bottom);
	scanf("%lf",&height);
	printf("%f\n",(ceiling+bottom)*height/2);
	return 0;
}
