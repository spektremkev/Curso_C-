//Valor Absoluto da Diferença entre Duas Notas

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {

    // permitir usar acentos
    setlocale(LC_ALL, "Portuguese");

    float nota1, nota2, dif;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    dif = nota1 - nota2;

    printf("A diferença entre %.2f e %.2f eh: %.2f\n", nota1, nota2, dif);



}