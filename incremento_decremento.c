#include <stdio.h>

int main(){
    int numero1 = 1, resultado = numero1;

    //incremento
    printf("Antes do incremento %d\n", numero1);
    numero1++;
    //pos incremento
    printf("Após incremento %d\n", numero1);

    resultado = numero1++;
    printf("resultado: %d\n, numero1: %d\n", numero1);
    resultado = ++numero1;

    resultado = numero1--;
    printf("resultado: %d\n, numero1: %d\n", numero1);
    resultado = --numero1;
    printf("resultado: %d\n, numero1: %d\n", numero1);

    return 0;

}