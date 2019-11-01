#include <stdio.h>
#include <stdlib.h>

int main()
{
    //ファイルポインタの宣言
    FILE *input, *output;

    //読み込み用のchar型配列解答例その１用
    //char str[256][256];

    //読み込み用のchar型配列解答例その２用
    char buf[256];

    //数値変換用
    int n;

    //入力と出力用のfopen(ファイルを開く)
    input = fopen("input.txt", "r");
    output = fopen("output.txt", "w");

    /********************************************
    ファイル処理部解答例その１
    二次元配列を宣言して、その中に全部保存しきる例
    ********************************************/
    /*
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
    */

    /********************************************
    ファイル処理部解答例その２
    1次元配列を宣言して、使いまわす例
    こっちのほうが簡潔で分かりやすい。
    不特定な行数でも使いやすいので、こっちのほうがいい。
    （と思ってます）
    ********************************************/
    while (fgets(buf, 255, input) != NULL)
    {
        printf("read : %s", buf);
        n = atoi(buf) * 2;
        printf("output : %d\n\n", n);
        fprintf(output, "%d\n", n);
    }

    //ファイルを閉じる
    fclose(input);
    fclose(output);
    return 0;
}