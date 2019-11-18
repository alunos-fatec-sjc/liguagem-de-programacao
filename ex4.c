#include<stdio.h>
#include<math.h>

 struct ponto{
    int x;
    int y;
}ponto1, ponto2;

struct ponto *ptr1;
struct ponto *ptr2;
ptr1 = &ponto1;
ptr2 = &ponto2;

void lerCoordenadas()
{
    printf("Coordenadas ponto 1 (x, y): ");
    scanf("%d %d", &(*ptr1).x, &(*ptr1).y);
    printf("Coordenadas ponto 2 (x, y): ");
    scanf("%d %d", &(*ptr2).x, &(*ptr2).y);
}

int distancia()
{
    int x_quadrado, y_quadrado, d;
    x_quadrado = pow(((*ptr2).x - (*ptr1).x), 2);
    y_quadrado = pow(((*ptr2).y - (*ptr1).y), 2);
    d = sqrt((x_quadrado - y_quadrado));
    return d;
}

int main()
{
    lerCoordenadas();
    int dist = distancia();
    printf("%d", dist);
    return 0;
}