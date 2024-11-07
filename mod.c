#include <stdio.h>

int mod(int a, int b) {
    if (b > a) {
        return a;
    } else {
        return mod(a-b, b);
    }
}

int main() {
    int n1, n2;
    scanf("%d", &n1);
    scanf("%d", &n2);
    printf("%d\n", mod(n1, n2));
    return 0;
}