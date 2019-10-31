#include <stdio.h>
#include <stdlib.h>

int main()
{
    //ファイルポインタの宣言
    FILE *input, *output;
    //読み込み用のchar型二次元配列
    char str[256][256];
    //数値変換用
    int n;

    //入力と出力用のfopen
    input = fopen("input.txt", "r");
    output = fopen("output.txt", "w");
    
    //ファイル処理部
    for(int i = 0;i < 256; i++){
        //fgetsの戻り値がNULLの時、もう読み込めないので終了。
        if(fgets(str[i],256,input) == NULL){
            break;
        }else{
            printf("read : %s", str[i]);
            n = atoi(str[i]) * 2;
            //n *= 2;
            printf("output : %d\n\n", n);
            fprintf(output,"%d\n", n);
        }
    }
    
    //閉じる
    fclose(input);
    fclose(output);
    return 0;
}