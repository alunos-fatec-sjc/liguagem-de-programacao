7. Teste o código do exercício 6 sem utilizar ponteiros. Quais são os resultados? Qual a diferença observada com e sem o uso de ponteiros?<br>

Resultado:
```
num1 = 100
num2 = 200
```

Resposta: 
- Sem o uso de ponteiros as variáveis não serão trocadas, pois é necessários que seus valores sejam trocados por meio de seus endereços.
- Sem o uso de ponteiros as variáveis não serão trocadas, pois a função `troca` usa um escopo de variavel diferente da função `main`, e só é possivel alterar os valores presentes na função `main` de dentro da própria main, ou exportando as referencias das variáveis por meio dos ponteiros.
