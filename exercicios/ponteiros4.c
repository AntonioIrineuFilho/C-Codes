#include <stdio.h>

void swap(int *a, int *b) {
    int x = *a;
    *a = *b;
    *b = x; 
}

int main() {
    int n1, n2;
    printf("Digite um número: ");
    scanf("%d", &n1);
    printf("Digite outro número: ");
    scanf("%d", &n2);
    swap(&n1, &n2);
    printf("Valor de n1 = %d\nValor de n2 = %d\n", n1, n2);
    return 0;
}