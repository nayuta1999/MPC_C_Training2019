#include <stdio.h>

char charChange(char c);

int main(void){
  char c;
  printf("c = "); scanf("%c", &c);

  printf("変換後: %c\n", charChange(c));
}

char charChange(char c){
  if('a' <= c && c <= 'z'){
    c -= 'a' - 'A';
  }else if('A' <= c && c <= 'Z'){
    c += 'a' - 'A';
  }
  return c;
}
