#include <stdio.h>

float media(float a, float b, float c, float d) {
    return (a + b + c + d) / 4;
}

int main() {
    float a, b, c, d;
    printf("Digite quatro números separados por espaço: ");
    scanf("%f %f %f %f", &a, &b, &c, &d);
    float m = media(a, b, c, d);
    printf("A media dos números digitados é %.1f", m);
    return 0;
}