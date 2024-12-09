#include <stdio.h>

int isSort(int array[], int len) {
    int n = array[0];
    int status = 1;
    for (int i = 1; i < len; i++) {
        if (n <= array[i]) {
            n = array[i];
        } else {
            status = 0;
        }
    }
    return status;
}
int main() {
    
}