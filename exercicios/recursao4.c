#include <stdio.h>

char inverterString(char string[], int len) {
    if (len == 0) {
        return string[len];
    } else {
        printf("%c", string[len]);
        return string[len-2]
    }
}

int main() {
    return 0;
}