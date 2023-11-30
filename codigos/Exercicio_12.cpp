//demonstração das Condicionais Simples e Compostas

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main(){

    int a, b;

    setlocale(LC_ALL, "Portuguese");

    printf("Digite dois números: ");
    scanf("%d %d", &a, &b);

    if(a > b) {
        printf("O maior entre %d e %d é: %d", a, b, a);
    } else {
        printf("O maior entre %d e %d é: %d", a, b, b);
    }

    if(a == b) {
        printf("Os dois números sao iguais");
    }
    if(a || b) {
        printf("Os dois números sao diferentes");
    }
    if((a == b) || (a || b)) {
        printf("Os dois números sao iguais ou diferentes");
    }
    if((a ==5 || b > 5 || b <= 10) && (a == 10 || b == 10)) {
        printf("Os dois números sao iguais ou diferentes");
        
    }
}