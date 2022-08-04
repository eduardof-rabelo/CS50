#include <stdio.h>

void getNum(char str[17]) {
  int val;
  printf(str);
  scanf("%i", val);
  return val;
}

int main() {
  int x;
  int y;
  x = getVal("Qual o valor de x?");
  y = getVal("Qual o valor de y?");
  return 0;
}
