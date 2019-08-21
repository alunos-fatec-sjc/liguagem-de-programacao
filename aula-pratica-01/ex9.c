#include <stdio.h>

void sum();
void sub();
void mul();
void div();

int a,b;

int main() {
  int o;

  do {
    printf("1) soma");
    printf("2) subtracao");
    printf("3) division");
    printf("4) multiply");

    scanf("%d", &o, &a, &b);

    switch(o) {
      case 1: sum(); break;
      case 2: sub(); break;
      case 3: div(); break;
      case 4: mul(); break;
    }

  } while (o > 4 || o < 1);

  return 0;
}

void sum() { printf("%d", a + b); }
void sub() { printf("%d", a - b); }
void div() { printf("%d", a / b); }
void mul() { printf("%d", a * b); }
