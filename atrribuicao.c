#include <stdio.h>

int main(){
    int numero1 = 10, numero2, resultado;
    
    resultado = 10;
    printf("Resultado é: %d\n", resultado);

    resultado  += 20;
    printf("Resultado é: %d\n", resultado);

    resultado -= numero1;
    printf("Resultado é: %d\n", resultado);

    resultado *= 5;
    printf("Resultado é: %d\n", resultado);

    resultado /= 2;
    printf("Resultado é: %d\n", resultado);

    return 0;
}