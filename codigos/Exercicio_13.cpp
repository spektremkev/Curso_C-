// demonstração das condicionais logicas
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

   bool a = true, b = false;


    if (a == true){
            printf("O maior entre %d e %d é: %d", a, b, a);
        } else {
            printf("O maior entre %d e %d é: %d", a, b, b);
        }


    if(a != b) {
        printf("Os dois números sao iguais");
        printf("\n");
    }
    if(a || b) {
        printf("Os dois números sao diferentes");
        printf("\n");
    }
    if((a == b) || (a || b)) {
        printf("Os dois números sao iguais ou diferentes");
        printf("\n");
    }
    if((a ==5 || b > 5 || b <= 10) && (a == 10 || b == 10)) {
        printf("Os dois números sao iguais ou diferentes");
        printf("\n");
    }

    if (a == true){
        printf("O maior entre %d e %d é: %d", a, b, a);
        printf("\n");
    } else {
        printf("O maior entre %d e %d é: %d", a, b, b);
        printf("\n");
    }


    if (a != b) {
        printf("Os dois números sao iguais");
        printf("\n");
    }

    if(a || b) {
        printf("Os dois números sao diferentes");
        printf("\n");

        if ((a == b) || (a || b)) {
          printf("Os dois números sao iguais ou diferentes");
          printf("\n");
    }

    if((a == 5 || b > 5 || b <= 10) && (a == 10 || b == 10)) {
        printf("Os dois números sao iguais ou diferentes");
        printf("\n");
    }

    if(a or b) {
        printf("Os dois números sao iguais");
        printf("\n");
    }
    if(not a) {
        printf("O maior entre %d e %d é: %d", a, b, a);
        printf("\n");
    } else {
        printf("O maior entre %d e %d é: %d", a, b, b);
        printf("\n");
    }

    if (not b) {
        printf("O maior entre %d e %d é: %d", a, b, a);
        printf("\n");
    } else {
        printf("O maior entre %d e %d é: %d", a, b, b);
        printf("\n");
    }

    if(not a == b){
        printf("Os dois números sao iguais");
        printf("\n");
    }

}
}