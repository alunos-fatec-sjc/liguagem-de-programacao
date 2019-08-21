#include <stdio.h>

int main() {
  int a,b,c;
  int z1,z2,z3;

  scanf("%d %d %d", &a, &b, &c);

  if(a < b && b < c) {
    z1 = a; z2 = b; z3 = c;
  } else if (c < b && b < a) {
    z1 = c; z2 = b; z3 = a;
  } else if (b < a && a < c) {
    z1 = b; z2 = a; z3 = c;
  }


  printf("%d %d %d", z1, z2, z3);
  return 0;
}
