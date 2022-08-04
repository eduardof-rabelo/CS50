#include <stdio.h>

long getNum(char str[]) {
  long val;
  printf(str);
  scanf("%i", &val);
  return val;
}

int main() {
  long x, y, soma;
  x = getNum("x: ");
  y = getNum("y: ");

  soma = x + y;
  printf("A soma de x e y é: %i\n", soma);

  return 0;
}
