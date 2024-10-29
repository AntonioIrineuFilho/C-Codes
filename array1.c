#include <stdio.h>

int main () {
    int i, cont, total[21], pares[10];
    cont = 0;
    for (i = 0; i < 21; i++) {
        scanf("%d", &total[i]);
    }
    for (i = 0; i < 21; i++) {
        if (total[i] % 2 == 0) {
            if (cont < 10) {
                pares[cont] = total[i];
                cont++;
            } else {
                break;
            }
        }
    }
    for (i = 0; i < 10; i++) {
        printf("%d ", pares[i]);
    }

    
    return 0;
}