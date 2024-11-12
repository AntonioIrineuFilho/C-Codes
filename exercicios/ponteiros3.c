#include <stdio.h>

int main() {
    int i = 3, j = 5;
    int *p, *q;
    p = &i;
    q = &j;
    if (p == &i) {printf("1\n");} // true -> comparação entre o ponteiro e o endereço de i, ambos são os mesmos
    if (p == *p) {printf("2\n");} // false -> comparação entre um ponteiro e um valor apontado
    if (q == j) {printf("3\n");} // false -> comparação entre um ponteiro e um valor inteiro
    if (*q == &j) {printf("4\n");} // false -> comparação entre um valor apontado e um endereço(ponteiro)
    if (*q == j) {printf("5\n");} // true -> comparação entre um valor apontado e outro valor, ambos compartilhando o mesmo endereço, portanto, iguais
    if (*p == *q) {printf("6\n");} // false -> valores apontados de endereços diferentes com valores diferentes

    return 0;
}