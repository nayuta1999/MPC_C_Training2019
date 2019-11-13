#include<stdio.h>
#define STR "文字列"

int main(){
    int num;
    int array[30];
    //変数のデータサイズ取得
    printf("%d\n",sizeof(num));

    //配列のサイズを取得
    printf("%d\n",sizeof(array));

    //文字列のサイズも取得できる
    printf("%d\n",sizeof(STR));

    //型のサイズも取得できる
    printf("%d\n",sizeof(double));
    return 0;
}