

//demostração de uso de variaveis e operadores aritmeticos
#include <iostream>
#include <stdlib.h>
#include <locale.h>

int main() {

    //permitir usar acentos
    setlocale(LC_ALL, "Portuguese");

    int a = 5;
    int b = 3;
    int soma = a + b;
    int diferenca = a - b;
    int produto = a * b;
    int cociente = a / b;

    std::cout << "A soma de a e b é: " << soma << std::endl;
    std::cout << "A diferença entre a e b é: " << diferenca << std::endl;
    std::cout << "O produto de a e b é: " << produto << std::endl;
    std::cout << "O quociente de a e b é: " << cociente << std::endl;

    return 0;
}