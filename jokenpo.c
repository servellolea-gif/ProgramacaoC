#include    <stdio.h>
#include    <stdlib.h>
#include    <time.h>   

int main(){
    int escolhaJogador, escolhaComputador;
    srand(time(0));

    printf("***JOKENPÔ***\n");
    printf("Escolha uma opção:\n");
    printf("1. PEDRA\n");
    printf("2. PAPEL\n");
    printf("3. TESOURA\n");
    scanf("%d", &escolhaJogador);

    escolhaComputador = rand() % 3 + 1;

    switch (escolhaJogador)
    {
    case 1:
        printf("Jogador: Pedra - ");
        break;
    case 2:
        printf("Jogador: Papel - ");
        break;
    case 3:
        printf("Jogador: Tesoura - ");
        break;
    default:
        printf("Escolha inválida.\n");  
        break;
    }

switch (escolhaComputador)
    {
    case 1:
        printf("Computador: Pedra\n");
        break;
    case 2:
        printf("Computador: Papel\n");
        break;
    case 3:
        printf("Computador: Tesoura\n");
        break;
    }

    if (escolhaJogador == escolhaComputador) {
        printf("Jogo Empatado!\n");
    } else if ((escolhaJogador == 1 && escolhaComputador == 3) ||
               (escolhaJogador == 2 && escolhaComputador == 1) ||
               (escolhaJogador == 3 && escolhaComputador == 2)) {
        printf("Parabéns, você venceu!\n");
    } else {
        printf("Que pena, você perdeu.\n");
    }

    return 0;
}