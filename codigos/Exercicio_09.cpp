//  Dados n e dois números inteiros positivos i e j diferentes de 0, imprimir em
//  ordem crescente os n primeiros naturais que são múltiplos de i ou de j e ou
//  de ambos.

//  Exemplo: Para n = 6 , i = 2 e j = 3 a saída deverá ser : 0,2,3,4,6,8.


#include <locale.h>
#include <stdio.h>
#include <stdlib.h>


int main()
{
  int i, j, n,      /* dados de entrada                        */
 multi, multj, /* multiplos de i e multiplos de j         */
     k;        /* conta quantos multiplos foram impressos */
  
  setlocale(LC_ALL, "Portuguese");

  printf("\n\tCalculo dos n primeiros multiplos de i ou de j\n");
  printf("\nDigite o numero de multiplos a serem impressos: ");
  scanf("%d", &n);
  printf("Digite os dois numeros: ");
  scanf("%d %d", &i, &j);

  /* inicializacoes */
  multi = 0;
  multj = 0;

  printf("Os %d primeiros multiplos de %d ou de %d sao:", n, i, j);
  for (k = 0; k < n; k++) {
    if (multi < multj) /* Caso 1. multi < multj */
    {
      printf(" %d", multi);
      multi = multi + i;
    } else {
      if (multi > multj) /* Caso 2. multi > multj  */
      {
        printf(" %d", multj);
        multj = multj + j;
      } else /* Caso 3. multi == multj */
      {
        printf(" %d", multj);
        multi = multi + i;
        multj = multj + j;
      }
    }
 }
 printf("\n");

 return 0;
 }
