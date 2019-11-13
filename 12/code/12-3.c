#include<stdio.h>
#include<stdlib.h>

int main(){
    int i;
    int n;
    int *ary;

    printf("要素数を入力してください\n");
    scanf("%d",&n);

    /*(int型の変数1分のサイズ)×n
    のぶんだけ配列要素を確保しaryに代入*/
    ary=(int *)malloc(sizeof(int)*n);

    //もし確保できなかった場合プログラム強制終了
    if(ary==NULL) exit(0);

    printf("要素を入力してください\n");
    for(i=0;i<n;i++){
        scanf("%d",&ary[i]);
    }
    for(i=0;i<n;i++){
        printf("%d ",ary[i]);
    }

    printf("\n");

    free(ary);
    return 0;
}