#include <stdio.h>
#include <math.h>

float dist_dois_pontos(int x1, int y1, int x2, int y2) {
    float pit = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
    float raiz = sqrt(pit);
    return raiz;
}

int main() {
    float x1, y1, x2, y2;
    printf("Digite x1 e y1: ");
    scanf("%f %f", &x1, &y1);
    printf("Digite x2 e y2: ");
    scanf("%f %f", &x2, &y2);
    float ddp = dist_dois_pontos(x1, y1, x2, y2);
    printf("A distância entre os pontos é %.1f", ddp);
    return 0;
}