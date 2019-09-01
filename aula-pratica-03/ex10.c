#include<stdio.h>

int main()
{
    int vetor[10], num, index_z = 9, index = 0;

    for(int i = 0; i < 10; i++) {
        printf("Digite um numero: ");
        scanf("%d", &num);
        if(num == 0) {
            vetor[index_z--] = num;
        }
        else {
            vetor[index++] = num;
        }
     }

    for(int i  = 0; i < 10; i++) {
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }

    return 0;
}

