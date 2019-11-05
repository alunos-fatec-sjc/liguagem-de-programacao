5. Qual é o resultado do seguinte programa?

```c
#include <stdio.h>
int main()
{
    float vet[5] = {1.1,2.2,3.3,4.4,5.5};
    float *f;
    int i;
    f = vet;
    printf("contador/valor/valor/endereco/endereco\n");
    for(i = 0 ; i <= 4 ; i++){
        printf("\ni = %d",i);
        printf("   vet[%d] = %.1f",i, vet[i]);
        printf("   *(f + %d) = %.1f",i, *(f+i));
        }
    return 0;
}

```

```
contador/valor/valor /endereco/endereco
i = 0    vet[0] = 1.1  *(f + 0) = 1.1
i = 1    vet[1] = 2.2  *(f + 1) = 2.2
i = 2    vet[2] = 3.3  *(f + 2) = 3.3
i = 3    vet[3] = 4.4  *(f + 3) = 4.4
i = 4    vet[4] = 5.5  *(f + 4) = 5.5
```