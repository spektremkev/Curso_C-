// Dado um número inteiro positivo n, imprimir os n primeiros naturais ímpares.

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, i, impar;

    setlocale(LC_ALL, "Portuguese");
    //inicializando 
    printf("Digite um número: ");
    scanf("%d", &num);

    i = 0;
    impar = 1;
    //enquanto i while impares for maior que o num
    printf("Os %d primeiros impares: ", num);
    while (i < num) {
        printf("%d ", impar);
        impar = impar + 2;
        i++;
    }
}