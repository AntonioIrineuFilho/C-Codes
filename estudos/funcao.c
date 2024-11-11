#include <stdio.h>

// int soma(float a, float b) {
//     return a+b;
// }

int soma20_original(int *a) {
    *a = *a + 20;
    return *a;
}

int soma20_copia(int a) {
    a = a + 20;
    return a;
}

int main() {
    int a = 10;
    soma20_copia(a); // soma 20 na cópia, a permanece 10
    printf("%d\n", a);
    soma20_original(&a); // soma 20 no ponteiro, a muda para 30
    printf("%d", a);
    return 0;
}