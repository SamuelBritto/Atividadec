#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <iostream>

int main() {

    int opcao;
    printf("Bem vindo ao Menu de opcoes: \n"
        "Digite um numero \n\n"
        "\n '1' -  Par ou impar\n"
        " '2' - Potencia\n"
        " '3' - Raiz\n"
        " '4' -  Ano Bissexto\n"
        " '5' -  Media Ponderada\n"
        " '6' - Numero primo\n"
        " '7' - Fibonacci\n"
        " '8' -  Notas dos alunos\n"
        " '9' - Fatorial\n"
        " '10'- Nota do aluno\n"
        " '0' - SAIR\n");

    printf("\nDigite um numero : ");
    scanf("%d", & opcao);
    while (opcao != 0) {
        switch (opcao) {
            case 1: {
                system("cls");
                int numero;
                printf("<PROGRAMA PAR OU IMPAR>\n");
                printf("\nDigite um numero inteiro e positivo: ");
                scanf("%d", & numero);

                if (numero % 2 == 0) {
                    printf("%d E um numero par\n ", numero);
                } else {
                    printf("%d E um numero impar\n ", numero);
                }
                printf("\nINFORME UM NUMERO DO MENU: ");
                scanf("%d", & opcao);
                break;
            }
            case 2: {
                system("cls");
                double a;
                int b;
                double potencia;
                printf("<PROGRAMA POTENCIACAO>\n");
                printf("\nPrimeiro termo: ");
                scanf("%lf", & a);
                printf("Segundo termo: ");
                scanf("%d", & b);

                potencia = pow(a, b);
                printf("Valor De %.2f elevado a %d = %.2lf\n", a, b, potencia);

                printf("\nINFORME UM NUMERO DO MENU: ");
                scanf("%d", & opcao);
                break;
            }
            case 3: {
                system("cls");
                double x;
                int y;
                double raiz, potenciacao;
                printf("< RAIZ>\n");
                printf("\nPRIMEIRO TERMO: ");
                scanf("%lf", & x);
                printf("SEGUNDO TERMO: ");
                scanf("%d", & y);

                raiz = sqrt(x);
                printf("Valor da raiz = %.2lf\n", raiz);
                potenciacao = pow(raiz, y);
                printf("%.2lf elevado %d = %.2lf\n", raiz, y, potenciacao);

                printf("\nINFORME UM NUMERO DO MENU: ");
                scanf("%d", & opcao);
                break;
            }
            case 4: {
                system("cls");
                int ano;
                printf("< ANO BISSEXTO>\n");
                printf("\nDiga o ano: ");
                scanf("%d", & ano);

                if (ano % 4 == 0) {
                    printf("%d, Esse ano e bissexto\n", ano);
                } else {
                    printf("%d Esse nao e bissexto\n", ano);
                }
                printf("\nINFORME UM NUMERO DO MENU: ");
                scanf("%d", & opcao);
                break;
            }
            case 5: {
                system("cls");
                double nota1, nota2, nota3;
                double ponderada;

                printf("< MEDIA PONDERADA>\n");
                printf("\nDigite a primeira nota: ");
                scanf("%lf", & nota1);
                printf("Segunda nota: ");
                scanf("%lf", & nota2);
                printf("Terceira nota: ");
                scanf("%lf", & nota3);

                ponderada = (1 * nota1 + 1 * nota2 + 2 * nota3) / (1 + 1 + 2);

                if (ponderada >= 60) {
                    printf("SUA MEDIA FOI %.2lf, Parabens,vc foi aprovado, pode ir pra casa tranquilo\n", ponderada);
                } else {
                    printf("\nSUA MEDIA FOI %.2lf, Infelizmente,vc foi reprovado, nao foi dessa vez, estude mais \n", ponderada);
                }
                printf("\nINFORME UM NUMERO DO MENU: ");
                scanf("%d", & opcao);
                break;
            }
            case 6: {
                system("cls");
                int num, i;
                int div;

                div = 0;

                printf("< NUMERO PRIMO>\n");
                printf("\nDigite um numero inteiro e positivo: ");
                scanf("%d", & num);
                for (i = 1; i <= num; i++) {
                    if (num % i == 0) {
                        div++;
                    }
                }
                if (div == 2) {
                    printf("%d esse numero e primo\n", num);
                } else {
                    printf("%d esse numero nao e primo\n", num);
                }
                printf("\nINFORME UM NUMERO DO MENU: ");
                scanf("%d", & opcao);
                break;
            }
            case 7: {
                system("cls");
                break;
            }
            break;
        case 8: {
            system("cls");
            break;
        }

        break;
        case 9: {
            system("cls");
            break;
        }

        break;
        case 10: {
            system("cls");
            char nome[15];
            int matricula;

            printf("< MATRICULA ALUNO>\n");
            printf("\nNOME: ");
            scanf("%s", & nome);
            printf("MATRICULA: ");
            scanf("%d", & matricula);

            printf("Nome do aluno: %s | Matricula: %X\n", nome, matricula);
            printf("\nINFORME UM NUMERO DO MENU: ");
            scanf("%d", & opcao);
            break;
        }
        default:
            printf("\nNumero invalido,por favor digite um numero valido,agradeco desde ja: ");
            scanf("%d", & opcao);
        }
    }
    printf("Ate a proxima!!");
    return 0;
}
