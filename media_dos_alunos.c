#include <stdio.h>

int main(){
    int nota1;
    int nota2;
    int nota3;
    int somaDasNotas;
    float media;

    printf("*** Programa de Cálculo de Média ***\n");
    printf("Digite a sua primeira nota\n");
    scanf("%d", &nota1);
    printf("Digite a sua segunda nota\n");
    scanf("%d", &nota2);
    printf("Digite a sua terceira nota\n");
    scanf("%d", &nota3);

    somaDasNotas =  (float) nota1 + nota2 + nota3;
    media =  (float) (nota1 + nota2 + nota3) / 3;

    printf("A soma das suas notas é: %d\n", somaDasNotas);
    printf("A media das notas é: %.2f\n", media);
return 0;
}