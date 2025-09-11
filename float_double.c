#include <stdio.h>

int main(){
    float x = 5.5;
    float y = 2.2;
    float soma = x + y;
    float diferenca = x - y;
    float produto = x * y;
    float quociente = x / y;

    /*
    int a = 10;
    float b = 3.5;
    float resultado = a + b;

    printf("Resultado: %.2f\n", resultado);
    */

    float bolacha = 7.50;
    int sabao = 3;
    int macarrao = 8;
    float feijao = 5.75;
    float limao = 2.99;
    int pastaDeDente = 3;
    float somaDosProdutos = (float) bolacha + sabao + macarrao + feijao + limao + pastaDeDente;
    int doisProdutos = macarrao + pastaDeDente;
    float feijaoLimao = feijao + limao;

    printf("A soma dos produtos comprados é: %.2f\n", somaDosProdutos);
    printf("A soma é: %d\n", doisProdutos);
    printf("A soma é: %.2f\n", feijaoLimao);
    
    
    /*
    int a = 10;
    int b = 3;
    float quociente2 = (float) a / b; // 'a' e explicitamente convertido para float 
    printf("Quociente: %.2f\n", quociente2);

    printf("Soma: %.2f\n", soma);
    printf("Diferença: %.2f\n", diferenca);
    printf("Produto: %.2f\n", produto);
    printf("Quociente: %.2f\n", quociente);
    */




    return 0;
}