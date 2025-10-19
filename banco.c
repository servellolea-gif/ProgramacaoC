#include    <stdio.h>
int main (){
    
    int opcao, codigo_banco, numero_agencia, numero_conta;
    float saldo = 1000.00, deposito, saque, resultado_deposito, resultado_saque;

    printf("Escolha uma opção:\n");
    printf("1. Consultar saldo.\n");
    printf("2. Fazer um depósito.\n");
    printf("3. Fazer um saque.\n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("O seu saldo é: R$ %.2f\n", saldo);
            break;
        case 2:
            printf("Digite o valor a ser depositado:\n");
            scanf("%f", &deposito);
            printf("Digite o código do banco em que deseja depositar:\n");
            scanf("%d", &codigo_banco);
            printf("Digite o número da agência:\n");
            scanf("%d", &numero_agencia);
            printf("Digite o número da conta:\n");
            scanf("%d", &numero_conta);
            resultado_deposito = saldo + deposito;
            printf("Depósito realizado com sucesso!\n");
            printf("O seu saldo atual é: R$ %.2f\n", resultado_deposito);
            break;
        case 3:
            printf("Digite o valor a ser sacado:\n");
            scanf("%f", &saque);
            if (saque > saldo) {
                printf("Saldo insuficiente!\n");
            } else {
                resultado_saque = saldo - saque;
                printf("Saque realizado com sucesso!\n");
                printf("O seu saldo atual é: R$ %.2f\n", resultado_saque);
            }
            break;
        default:
            printf("Opção inválida!\n");
    }

    return 0;
}