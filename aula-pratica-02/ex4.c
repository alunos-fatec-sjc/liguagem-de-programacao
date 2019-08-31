#include<stdio.h>
int triangulo(int x, int y, int z);

int triangulo(int x, int y, int z)
{
    if((x < y + z) && (y < x + z) && (z < y + x)){
        if (x == y && y == z) printf("O tri�ngulo � equil�tero");
        else if (x != y && y != z && x != z) printf("O tri�ngulo � escaleno");
        else printf("O tri�ngulo � is�sceles");
    }
    else {
        printf("N�o � um tri�ngulo");
        return 0;
    }
    return 1;
}

int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    triangulo(a, b, c);
    return 1;
}
