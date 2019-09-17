#include <iostream>
#include <stdio.h>


int main(int argc, char * arg[]) {

  int num;

  while (num != 10) {
    printf("\n MENU ");
    printf("\n Escolha uma opcao");
    printf("\n 1 - Opcao 1 ");
    printf("\n 2 - Opcao 2 ");
    printf("\n 3 - Opcao 3 ");
    printf("\n 4 - Opcao 4 ");
    printf("\n 5 - Opcao 5 ");
    printf("\n 6 - Opcao 6 ");
    printf("\n 7 - Opcao 7 ");
    printf("\n 8 - Opcao 8 ");
    printf("\n 9 - Opcao 9 ");
    printf("\n 0 - Fechar o programa ");
    printf("\n\n Escolha um numero: ");
    scanf("%d", & num);

    switch (num) {
    case 1:
      int opcao;
      // se o numero for diferente de 10, ele vai continuar
      // escolha e igual a 1

      while (opcao != 10) {
        printf("\n 1 - Opcao 1 ");
        printf("\n 2 - Opcao 2 ");
        printf("\n 3 - Opcao 3 ");
        printf("\n 4 - Opcao 4 ");
        printf("\n 5 - Opcao 5 ");
        printf("\n 6 - Opcao 6 ");
        printf("\n 7 - Opcao 7 ");
        printf("\n 8 - Opcao 8 ");
        printf("\n 9 - Opcao 9 ");
        printf("\n 0 - Fechar o programa ");
        printf("\n\n Escolha um numero: ");
        scanf("%d", & opcao);

        switch (opcao) {
        case 1:
          printf("\n\n Opcao foi: 1 ");
          break;
        case 2:
          printf("\n\n Opcao foi: 2 ");
          break;
        case 3:
          printf("\n\n Opcao foi: 3 ");
          break;
        case 4:
          printf("\n\n Opcao foi: 4 ");
          break;
        case 5:
          printf("\n\n Opcao foi: 5 ");
          break;
        case 6:
          printf("\n\n Opcao foi: 6 ");
          break;
        case 7:
          printf("\n\n Opcao foi: 7 ");
          break;
        case 8:
          printf("\n\n Opcao foi: 8 ");
          break;
        case 9:
          printf("\n\n Opcao foi: 9 ");
          break;
        case 0:
          printf("\n\n O programa foi fechado ");
          exit(0);
        default:
          printf("\n\n Numero invalido ");
          break;
        }
        case 2:

          int i, n;
        int divisao = 0;

        do {
          printf("Digite um numero para ver se e primo: ");
          scanf("%d", & n);
          if (n <= 0) printf("numero invalido digite um numero positivo\n");
        } while (n <= 0);

        for (i = 1; i <= n && divisao == 0; i++) {
          if (n % i == 0) {
            divisao++;
          }
        }
        if (divisao == 0) {
          printf("%d é um numero primo\n", n);
        } else {
          printf("%d nao e um numero primo ", n);
        }

        
      }
    }
  }
 return 0;}
