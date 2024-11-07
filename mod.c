#include <stdio.h>

int mod(int a, int b) {
    if (b > a) {
        return a;
    } else {
        return mod(a-b, b);
    }
}

int main() {

    int x = mod(10, 4);
    printf("%d", x);
    return 0;
}