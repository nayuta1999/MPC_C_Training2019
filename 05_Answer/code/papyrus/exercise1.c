#include <stdio.h>
int main(void){
  int player_hp, player_atk;
  int enemy_hp, enemy_atk;

  printf("player_hp = "); scanf("%d", &player_hp);
  printf("player_atk = "); scanf("%d", &player_atk);
  printf("enemy_hp = "); scanf("%d", &enemy_hp);
  printf("enemy_atk = "); scanf("%d", &enemy_atk);

  while(1){
    enemy_hp -= player_atk;
    if(enemy_hp <= 0){
      printf("Win\n");
      break;
    }

    player_hp -= enemy_atk;
    if(player_hp <= 0){
      printf("Lose\n");
      break;
    }
  }
}
