#include<stdio.h>
#include<stdlib.h>

int main(){
    int i;
    int n;
    int *ary;

    printf("要素数を入力してください\n");
    scanf("%d",&n);
    ary=(int *)calloc(n,sizeof(int));

    if(ary==NULL) exit(0);

    //0が初期化されていることを確認
    for(i=0;i<n;i++){
        printf("%d ",ary[i]);
    }
    printf("\n");

    free(ary);
    return 0;
}