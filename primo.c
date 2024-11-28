#include <stdio.h>

int main() {
    long n;
    int primo;
    printf("Digite um número inteiro: ");
    scanf("%ld", &n);
    for (int i = n/2; i >= 1; i--) {
        if (n % i == 0 && i != 1) {
            primo = 0;
            break;
        } 
        if (i == 1) {
            primo = 1;
        }
    }
    if (primo == 1) {
        printf("%ld é primo.", n);
    } else {
        printf("%ld não é primo.", n);
    }
    return 0;
}