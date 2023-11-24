// Dado um inteiro não-negativo n, determinar n!
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {

    int n;
    // permitir usar acentos
    setlocale(LC_ALL, "Portuguese");

    printf("\n\t Calcular fatorial\n");
    printf("\n\t Digite um numero inteiro: ");
    scanf("%d", &n);

    //verificar se o n é positivo
    if (n > 0) {
        // código para quando n é positivo
        printf("\n\t O número é positivo\n");
        //calcular o fatorial
        for(int i = 1; i <= n; i++) {
            printf("\n\t %d! = %d", i, i);
        }
    } else {
        // código para quando n não é positivo
        printf("\n\t O número não é positivo\n");
    }



}