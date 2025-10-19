#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    int opcao, regras;
    int numeroSecreto, palpite;

    printf("Bem-vindo ao jogo de adivinhação!\n");
    printf("Escolha uma opção:\n");
    printf("1 - Iniciar o jogo\n");
    printf("2 - Regras do jogo\n");
    printf("3 - Sair\n");
    scanf("%d", &opcao);

    switch(opcao){
        case 1:
        printf("Iniciando o jogo...\n");
        srand(time(0));
        numeroSecreto = rand()%10;
        //o srand irá escolher um número aleátorio que pode ser muito grande, por isso, dividimos ele por 10 e utilizamos o resto da divisão como o numeroSecreto, assim, a opções numérica será entre 0 e 9.
       
        printf("Digite um número de 0 à 9:\n");
        scanf("%d", &palpite);

        if(numeroSecreto == palpite){
            printf ("Parabéns! Você acertou o número secreto que era %d\n", numeroSecreto);
        } else {
            printf("Que pena! Você errou. O número secreto era %d\n", numeroSecreto);
        }
        break;
        
        case 2:
        printf("Bem-vindo às regras do Jogo de Adivinhação!\n");
        printf("Selecione o número da regra que deseja saber mais:\n");
        printf("1 - Objetivo do jogo\n");
        printf("2 - Como jogar\n");
        scanf("%d", &regras);

            switch (regras)
            {
                case 1:
                    printf("Objetivo do jogo: Adivinhar o número secreto gerado pelo computador.\n");
                    break;
                case 2:
                    printf("Como jogar: O jogador deve escolher um número inteiro entre 0 e 9 para adivinhar o número secreto.\n");
                   break;
                default:
                   break;
            }
        break;

        case 3:
        printf("Saindo do jogo. Até a próxima!\n");
        break;
        default:
        printf("Opção inválida.\n");
        break;
       
    }

    return 0;
}