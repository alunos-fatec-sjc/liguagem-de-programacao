9. Mostre na tabela abaixo todos os passos (teste de mesa) e identifique qual será a saída do programa em C, para os valores lidos (x = 5 e y = 2), suponha que o endereço de memória atribuído para x = 0028ff40 e y = 0028ff44.

```c
#include<stdio.h>
void func(int *px, int *py) /*A*/
{
    py = px;  /*B*/
    *py = (*py) * (*px) * (*py); /*C*/
    *px = *py + *px; /*D*/
}

int main()
{   
    int x, y;
    scanf("%d", &x); /*5*/
    scanf("%d", &y); /*2*/
    func(&x, &y);
    printf("x = %d, y = %d\n", x, y); /*E*/
    return 0;
}
```

Teste de Mesa

|   |   px   |   py   | x | y |
|:-:|   :-:  |   :-:  |:-:|:-:|
| A |0028ff40|0028ff44| 5 | 2 |
| B |0028ff40|0028ff40| 5 | 2 |
| C |0028ff40|0029ff40|125| 2 |
| D |0028ff40|0029ff40|250| 2 |
| E |0028ff40|0028ff40|250| 2 |
