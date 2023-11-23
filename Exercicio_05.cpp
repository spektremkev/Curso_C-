// Dados um inteiro x e um inteiro não-negativo n, calcular x^n.
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {

    // permitir usar acentos
    setlocale(LC_ALL, "Portuguese");

    int x, n, potencia, contador;

    printf("\n\t Calcular potencia\n");
    printf("\n\t Digite um numero inteiro: ");
    scanf("%d", &x);

    printf("\n\t Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    //inicializando
    potencia = 1;
    contador = 0;

    //Calculo da potencia
    while (contador != n) {
        potencia = potencia * x;
        contador++;
    }

    printf("\n\t A potencia de %d elevado a %d é: %d\n", x, n, potencia);
    return 0;

}