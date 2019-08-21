#include <stdio.h>

int main() {
  int d,a = 1;

  scanf("%d", d);

  for (int i = 1; i < d; i++)
    a += i*a;

  printf("%d", a);


  return 0;
}
