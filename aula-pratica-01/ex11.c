#include <stdio.h>

int main() {
  int a, soma;
  scanf("%d", &a);

  for(int i = 0; i < a; i++)
    soma += i;

  printf("%d", soma);

  return 0;
}
