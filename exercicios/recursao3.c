#include <stdio.h>

int sumArray(int array[], int len, int index) {
    if (index == len-1) {
        return array[index];
    } else {
        return array[index] + sumArray(array, len, index+1);
    }
}


int main() {
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("%d\n", sumArray(array, 10, 0));
    return 0;
}