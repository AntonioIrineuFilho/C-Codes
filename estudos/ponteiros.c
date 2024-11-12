#include <stdio.h>

int main() {
    int a = 10;
    int *ponteiro = &a; // aponta para o valor dentro do endereço de memoria de a
    *ponteiro = *ponteiro + 20; // soma 20 ao valor referenciado / apontado
    int valor = *ponteiro;
    printf("%d\n", a); // output -> 30, porque o endereço de memoria de a recebe 20 devido ao ponteiro
    printf("%d\n", *ponteiro); // output -> 30
    printf("%d\n", valor); // output -> 30
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *ponteiro2 = &array[0]; // o ponteiro aponta para o endereço do primeiro elemento
    for (int i = 0; i < 10; i++) {
        printf("%d ", *(ponteiro2 + i)); // ao somar o ponteiro do primeiro elemento com o indice dos demais, consegue-se ponteiros que apontam para cada elemento do array
    }
    return 0;
}