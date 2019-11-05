6. Explique o código abaixo:

```c
#include<stdio.h>
int troca(int *a, int *b);

int main()
{
    int num1, num2;
    num1 = 100;
    num2 = 200;
    troca(&num1, &num2);
    printf(\nEles agora valem %d %d\n", num1, num2);
    return 0;
}

int troca(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
```

**Explicação:**
O código acima está trocando os valores de duas variáveis usando ponteiros armazenando o primeiro valor da primeira variável em uma variável temporária, em seguida atribuindo o valor da segunda variável para a primeira e por último, atribuindo para a segunda variável o valor de temp, que antes era o valor da pra primeira variável.
