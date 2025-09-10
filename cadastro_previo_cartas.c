#include <stdio.h>

int main() {
    char letraAaH;
    char codigoCarta[20];
    char nomeCidade[20];
    int população;
    float area;
    float pib;
    int numeroPontosTuristicos;

    printf("Digite a letra do estado\n");
    scanf("%c", &letraAaH);
    printf("Estado: %c\n", letraAaH);

    printf("Digite o codigo do estado\n");
    scanf("%s", &codigoCarta);
    printf("Codigo da carta: %s\n", codigoCarta);

    printf("Digite o nome da cidade\n");
    scanf("%s", &nomeCidade);
    printf("A cidade é: %s\n", nomeCidade);

    printf("Qual e o numero da população?");
    scanf("%d", &população);
    printf("A população e de: %d\n", população);

    printf("Qual o tamanho da area da cidade?\n");
    scanf("%f", &area);
    printf("A area da cidade e de: %d\n", area);

    printf("Digite o PIB da cidade\n");
    scanf("%f", &pib);
    printf("O PIB e de: %f\n", pib);

    printf("Digite o numero de pontos turisticos da cidade\n");
    scanf("%d", &numeroPontosTuristicos);
    printf("O numero de pontos turisticos é: %d\n", numeroPontosTuristicos);

    return 0;
}