#include <stdio.h>

int main() {
    int idade, matricula;
        float altura;
            char nome[50];

                printf("Qual a sua idade? \n");
                    scanf("%d", &idade);
                        printf("A sua idade é:  %d\n", idade);

                            printf("Qual a sua altura? \n");
                                scanf("%f", &altura);
                                    printf("A sua altura é: %.2f\n", altura);

                                        printf("Qual e o seu nome? \n");
                                            scanf("%s", &nome);
                                               printf("Nome do aluno: %s\n", nome);

                                                   printf("Digite a sua matricula \n");
                                                       scanf("%d", &matricula);
                                                           printf("A sua matricula é: %d\n", matricula);
}