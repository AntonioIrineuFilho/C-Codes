#include <stdio.h>

int main() {
    int a = 27;
    int b = 27 / 2; // IMPRIME O NÚMERO INTEIRO
    double c = 27 / 2; // IMPRIME O NÚMERO INTEIRO COM CASAS DECIMAIS 0
    double d = (double) 27 / 2; // CONVERTE O RESULTADO PARA DECIMAL E MOSTRA O VALOR COMPLETO (TYPE CASTING)
    double x = 567.8887322248953459694;
    float y = (float) x;
    char w[] = "1010";
    int z = (int)strtol(w, NULL, 2);
    printf("%d", w);
    return 0;
}