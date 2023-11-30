// Dados o número n de alunos de uma turma de Introdução aos Autômatos a Pilha
// (MAC 414) e suas notas da primeira prova, determinar a maior e a menor nota
// obtidas por essa turma (Nota máxima = 100 e nota mínima = 0).

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int contador = 0, notamaior = 0,notamenor = 100;

int n, nota;

int main() {
    // permitir usar acentos
    setlocale(LC_ALL, "Portuguese");
    
    // inicializando
   

    printf("\n\t Calcular maior e menor nota\n");
    printf("\n\t Digite o numero de alunos: ");
    scanf("%d", &n);

    
     while (contador < n) {
      printf("\n\t Digite a nota do aluno: ");
      scanf("%d", &nota);
      contador = contador + 1;
      if (nota > notamaior) {
        notamaior = nota;
      }
      if (nota < notamenor) {
        notamenor = nota;
      }
    }

    printf("\n\t A maior nota é: %d\n", notamaior);
    printf("\n\t A menor nota é: %d\n", notamenor);
    printf("\n");


    }
    


