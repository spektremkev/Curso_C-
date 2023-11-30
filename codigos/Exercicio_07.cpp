// Dados n e uma seqüência de n números inteiros, determinar a soma dos números
// pares.

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>


int main() {

    // permitir usar acentos
    setlocale(LC_ALL, "Portuguese");
    
    int n, soma = 0;

    printf("\n\t Calcular soma dos pares\n");
    printf("\n\t Digite o valor de n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        //verificar se é par
        if (i % 2 == 0) {
            soma = soma + i;
        }
    }
    
    printf("\n\t A soma dos pares é: %d\n", soma); 
    }