#include <stdio.h>

int main() {
    /*
    Soma ( + )
    Subtração ( - )
    Multiplicação ( * )
    Divisão ( / )
    Módulo ( % )
    */

    int numero1, numero2;
    int soma, subtracao, multiplicacao, divisao, modulo;

    printf("Entre com o número 1: \n");
    scanf("%d", &numero1);
    printf("Entre com o número 2: \n");
    scanf("%d", &numero2);

    //operação soma
    soma = numero1 + numero2;

    //operação subtração
    subtracao = numero1 - numero2;

    //operação multiplicação
    multiplicacao = numero1 * numero2;

    //operação divisão
    divisao = numero1 / numero2;

    //operação módulo
    modulo = numero1 % numero2;



    printf("A soma é: %d\n", soma);
    printf("A subtração é: %d\n", subtracao);
    printf("A multiplicação é: %d\n", multiplicacao);
    printf("A divisão é: %d\n", divisao);
    printf("O módulo é: %d\n", modulo);

    return 0;
}