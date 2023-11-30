//Media entre 2 números

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main(){

    int a, b;

    setlocale(LC_ALL, "Portuguese");

    printf("Digite dois números: ");
    scanf("%d %d", &a, &b);

    printf("A media entre %d e %d é: %d", a, b, (a + b)/2);

}