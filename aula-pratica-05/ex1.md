# 1. Explique o código abaixo:
```c
main()
{ 
  int  num1, num2, * p, * q; 
  num1 = 13; 
  num2 = 10; 
  p  = &num1;    
  q = p;          
  *q = 56;    
  printf ("v1:%d\n",num1);
  printf ("v2:%d\n",num2);
  printf ("p:%p\n",p);
  printf (“q:%p\n",q);
  printf ("p:%d\n",*p);
  printf ("q:%d\n",*q);	
}
```
## Explicação:

Nas primeiras linhas são declaradas as variáveis num1 e num2 e os ponteiros p e q. Em seguida num1 recebe
o valor 13 e num2 recebe o valor 10. O ponteiro p aponta para num1 e q recebe o valor de p, apontando também para num1. Após isso,
o valor que o ponteiro q aponta recebe 56, ou seja, *p e num1 recebem também o valor 56. Ao final, as saídas são:

```
v1: 56
v2: 10
p: 0x7ffe2b9a0660 // endereço qualquer para p;
q: 0x7ffe2b9a0660
p: 56
q: 56
```
