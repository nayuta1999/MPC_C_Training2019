#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct servant{
    char class[30];
    char np[50];
    struct servant *next;
}SERVANT;

SERVANT createServant(char *class, char *np);
void delete_servant(SERVANT **now);

int main(){

    SERVANT *p; //サーヴァント型のポインタ

    //サーヴァント4人分のノードを作る
    SERVANT saber = createServant("セイバー\0","約束された勝利の剣\0");
    SERVANT archer = createServant("アーチャー\0","無限の剣製\0");
    SERVANT lancer = createServant("ランサー\0","刺し穿つ死棘の槍\0");
    SERVANT rider = createServant("ライダー\0","騎英の手綱\0");

    //サーヴァントのノードをポインタでつなげる
    //ここでリスト構造になる
    saber.next = &archer;
    archer.next = &lancer;
    lancer.next = &rider;
    rider.next = NULL;

    p = &archer;
    delete_servant(&p); //archerの次のノードを自害させる

    p = &saber;
    while (1){
        printf("クラス: %s\n", p->class);
        printf("宝具 : %s\n", p->np);
        printf("--------------------------------\n");

        if (p->next != NULL){
            // 次がNULLでないときは、次に移動する
            p = p->next;
        }else{
            // 次がNULLなら、リストの末尾のためbreakでループ終了
            break;
        }
    }

    return 0;
}

//新しいノードを作成する関数
SERVANT createServant(char *class, char *np){
    SERVANT newServant;

    strcpy(newServant.class, class);
    strcpy(newServant.np, np);

    return newServant;
}

//ノードを削除する関数
void delete_servant(SERVANT **now){
    SERVANT *tmp2;
    
    //削除するデータが存在するか確認する
    if((*now)->next==NULL){
        printf("削除するデータはありません\n");
        return 0;
    }
    
    tmp2=(*now)->next;
    
    //ネクネクがなければ next を消すだけで ok
    if(tmp2->next==NULL){
        (*now)->next=NULL;
    }else{
        //ネクネクがあれば繋ぎなおした後にnextを消す
        (*now)->next=tmp2->next;       
    }
}
