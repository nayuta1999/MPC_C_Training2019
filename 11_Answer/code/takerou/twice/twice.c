#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    printf("%d\n", n * 2);
    return 0;
}

/*
パイプライン処理例

2 > input_p.txt;
cat input_p.txt | .\twice > output_p.txt;
cat output_p.txt
*/