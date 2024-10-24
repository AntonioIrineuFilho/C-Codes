#include <stdio.h>

int main() {
    float saldo = 0;
    int op;
    do {
        float valor;
        printf("1-Depositar\n2-Sacar\n3-Verificar Saldo\n");
        printf("Digite a opção desejada: ");
        scanf("%d", &op);
        if (op == 1) {
            printf("Digite o valor desejado: ");
            scanf("%f", &valor);
            saldo = saldo + valor;
            printf("Depósito efetuado com sucesso!\n");
        } else if (op == 2) {
            printf("Digite o valor desejado: ");
            scanf("%f", &valor);
            saldo = saldo - valor;
            printf("Saque efetuado com sucesso!\n");
        } else if (op == 3) {
            printf("Seu saldo atual é de R$ %.2f\n", saldo);
        } else {
            printf("Opção inválida.\n");
        }
        printf("Digite 1 para continuar ou 0 para encerrar: ");
        scanf("%d", &op);
    } while (op == 1);
    return 0;
}