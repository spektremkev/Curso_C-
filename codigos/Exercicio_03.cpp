//Dado um número inteiro positivo n, calcular a soma dos n primeiros números inteiros positivos.
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>


void solucao(){

    

      int n,    /* guarda o numero dado    */
        soma; /* guarda as somas parcias */

    printf("\n\tCalculo da soma dos n primeiros inteiros positivos\n");

    /* Inicializacoes */
    printf("\nDigite o valor de n: ");
    scanf("%d", &n);

    /* Calcula a soma */
    soma = (n * (n + 1)) / 2;

    /* Escreve a resposta */
    printf("A soma dos %d primeiros inteiros positivos e' %d\n", n, soma);
  
}




int main() {

    // permitir usar acentos
    setlocale(LC_ALL, "Portuguese");

    int num, i, soma; // variável para receber o número

    printf("Digite um número: ");
    scanf("%d", &num);

    soma = 0;
    i =1;

    //Calculo de soma
    while (i <= num) {
        soma = soma + i;
        i++;
    }

    printf("Soma dos %d primeiro inteiros positivos %d\n", num, soma);

    return 0;

    solucao();
}



