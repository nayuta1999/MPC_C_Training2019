#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ary;

    //mallocで配列の要素10個確保
    ary=(int *)malloc(sizeof(int)*10);
    
    //10個じゃ足りなかったので、100個確保
    ary=(int *)realloc(ary,sizeof(int)*100);
    
    free(ary);
    return 0;
}