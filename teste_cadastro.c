#include <stdio.h>

int main() {
    char estado, estado02;
    char codigoCarta[20], codigoCarta02[20];
    char nomeCidade[20], nomeCidade02[20];
    int população, população02;
    double area, area02;
    float pib, pib02;
    int numeroPontosTuristicos, numeroPontosTuristicos02;

    printf("Digite a letra do estado\n");
    scanf("%c", &estado);
    

    printf("Digite o codigo do estado\n");
    scanf("%s", &codigoCarta);
    

    printf("Digite o nome da cidade\n");
    scanf("%s", &nomeCidade);
   

    printf("Qual e o numero da população?");
    scanf("%d", &população);
    

    printf("Qual o tamanho da area da cidade?\n");
    scanf("%lf", &area);
   

    printf("Digite o PIB da cidade\n");
    scanf("%f", &pib);
    

    printf("Digite o numero de pontos turisticos da cidade\n");
    scanf("%d", &numeroPontosTuristicos);

    printf("Digite a letra do estado\n");
    scanf("%c", &estado02);

    printf("Digite o codigo do estado\n");
    scanf("%s", &codigoCarta02);

    printf("Digite o nome da cidade\n");
    scanf("%s", &nomeCidade02);

    printf("Qual e o numero da população?");
    scanf("%d", &população02);

    printf("Qual o tamanho da area da cidade?\n");
    scanf("%lf", &area02);

    printf("Digite o PIB da cidade\n");
    scanf("%f", &pib02);

    printf("Digite o numero de pontos turisticos da cidade\n");
    scanf("%d", &numeroPontosTuristicos02);



    
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigoCarta);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("População: %d\n", população);
    printf("Area: %lf km²\n", area );
    printf("PIB: %f bilhões de reais\n", pib);
    printf("Numero de Pontos Turisticos: %d\n", numeroPontosTuristicos);

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado02);
    printf("Codigo: %s\n", codigoCarta02);
    printf("Nome da Cidade: %s\n", nomeCidade02);
    printf("População: %d\n", população02);
    printf("Area: %lf km²\n", area02);
    printf("PIB: %f bilhões de reais\n", pib02);
    printf("Numero de Pontos Turisticos: %d\n", numeroPontosTuristicos02);

return 0;
}