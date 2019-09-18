(ENADE,2014) Matrizes multidimensionais são vetores capazes de armazenarem mais de uma posição de cada elemento que será
indicado por dois ou mais índices. Um exemplo de matrizes multidimensionais são as matrizes matemáticas, que representam 
valores tabulados em linhas e colunas. (Observações já fizeram em aula, porém refaça para estudo).

```c
#include <stdio.h>
void main ()
{
    int i, j;
    int m1[3][3];
    int m2[3][3];
    for (i=0;i<3;i++)
        for (j=0;j<3;j++)
        {
            m1[i][j]=i+2;
            m2[i][j]=j+2;
        }

    for (i=0;i<3;i++)
        for (j=0;j<3;j++)
            if (m1[i][j] == m2[i][j])
                m1[i][j]=0;
            else
                m2[i][j]=1;
}
```
    

Considerando o algoritmo acima e com base no teste de mesa, faça o que se pede nos itens a seguir:

a)  Apresente os dados das matrizes m1 e m2 ao termino da execução da linha 12.

|   | M1|   | - |   | M2|   |
| - |:-:| - | - | - |:-:| - |
| 2 | 2 | 2 | - | 2 | 3 | 4 |
| 3 | 3 | 3 | - | 2 | 3 | 4 |
| 4 | 4 | 4 | - | 2 | 3 | 4 |


b) Apresente os dados das matrizes m1 e m2 ao termino da execução da linha 20.

|   | M1|   | - |   | M2|   |
| - | :-: | - | - | - | :-: | - |
| 0 | 2 | 2 | - | 2 | 1 | 1 |
| 3 | 0 | 3 | - | 1 | 3 | 1 |
| 4 | 4 | 0 | - | 1 | 1 | 4 |

