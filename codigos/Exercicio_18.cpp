//Geradorde numeros aleatorios

#include <iostream>
#include <stdlib.h>
#include <time.h>

int main() {
    
    srand(time(NULL));
    int num = rand() % 100 + 1;
    std::cout << num << std::endl;

    return 0;

}