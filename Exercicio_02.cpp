//Dada uma seqüência de números inteiros não - nulos, seguida por 0, imprimir seus quadrados.
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

    

int main() {

  // permitir usar acentos
  setlocale(LC_ALL, "Portuguese");

  int num; // variável para receber o número
  int quadrado; // variável para receber o quadrado

  printf("Digite um número: ");
  scanf("%d", &num);

  while (num != 0) {
    quadrado = num * num;
    printf("O quadrado de %d é: %d\n", num, quadrado);
    printf("Digite um número: ");
    scanf("%d", &num);
  
  }


}