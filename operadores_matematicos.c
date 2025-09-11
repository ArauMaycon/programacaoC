#include <stdio.h>

int main(){
    int numero1, numero2;
    int soma, subtracao, multiplicacao, divisao;
    
    printf("Entre com o numero 1");
    scanf("%d", &numero1);
    printf("Entre com o numero 2");
    scanf("%d", &numero2);

    soma = numero1 + numero2;
    //operação soma

    subtracao = numero1 - numero2;
    //operação subtração

    multiplicacao = numero1 * numero2;
    // operação de multiplicação

    divisao = numero1 / numero2;
    //operação de divisão

    printf("A soma é: %d\n", soma);
    printf("A subtracao é: %d\n", subtracao);
    printf("A multiplicacao é: %d\n", multiplicacao);
    printf("A divisao é: %d\n", divisao);


    return 0;
}