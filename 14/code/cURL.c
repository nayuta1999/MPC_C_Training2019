#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void){
    char student_num[100],solved_num[100],command[200];
    printf("お疲れ様でした．あなたの学籍番号と何問解けたかを教えてください．\n学籍番号->");
    fgets(student_num,10,stdin);
    student_num[strlen(student_num)-1]='\0';
    printf("解けた問題数->");
    fgets(solved_num,10,stdin);
    solved_num[strlen(solved_num)-1]='\0';
    strcpy(command,"curl -X POST -H \"Content-Type: application/json\" -d '{\"student_num\":\"");//\", \"solved_num\":\"10\"}'  https://aj2gizlhp4.execute-api.us-east-1.amazonaws.com/default/SendSlack");
    strcat(command,student_num);
    strcat(command,"\", \"solved_num\":\"");
    strcat(command,solved_num);
    strcat(command,"\"}'  https://aj2gizlhp4.execute-api.us-east-1.amazonaws.com/default/SendSlack");
    system(command);
    return 0;
}