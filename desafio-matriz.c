#include <stdio.h>

int main() {
    int jogo[5][5] = {
        {0, -1, -1, 0, 0}, // -1 -> bomba
        {-1, 0, 0, -1, 0}, // 0 -> não-bomba
        {0, 0, 0, -1, -1},
        {0, -1, 0, 0, -1},
        {-1, 0, -1, 0, 0}
    };

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (jogo[i][j] == -1) {
                if (i == 0) {
                    if (j == 0) {
                        if (jogo[i][j+1] != -1) {jogo[i][j]++;};
                        if (jogo[i+1][j] != -1) {jogo[i+1][j]++;};
                        if (jogo[i+1][j+1] != -1) {jogo[i+1][j+1]++;};
                    } else if (j == 4) {
                        if (jogo[i][j-1] != -1) {jogo[i][j-1]++;};
                        if (jogo[i+1][j] != -1) {jogo[i+1][j]++;};
                        if (jogo[i+1][j-1] != -1) {jogo[i+1][j-1]++;};
                    } else {
                        if (jogo[i][j+1] != -1) {jogo[i][j+1]++;};
                        if (jogo[i][j-1] != -1) {jogo[i][j-1]++;};
                        if (jogo[i+1][j] != -1) {jogo[i+1][j]++;};
                        if (jogo[i+1][j+1] != -1) {jogo[i+1][j+1]++;};
                        if (jogo[i+1][j-1] != -1) {jogo[i+1][j-1]++;};
                    }
                } else if (i == 4) {
                    if (j == 0) {
                        if (jogo[i][j+1] != -1) {jogo[i][j+1]++;};
                        if (jogo[i-1][j] != -1) {jogo[i-1][j]++;};
                        if (jogo[i-1][j+1] != -1) {jogo[i-1][j+1]++;};
                    } else if (j == 4) {
                        if (jogo[i][j-1] != -1) {jogo[i][j-1]++;};
                        if (jogo[i-1][j] != -1) {jogo[i-1][j]++;};
                        if (jogo[i-1][j-1] != -1) {jogo[i-1][j-1]++;};
                    } else {
                        if (jogo[i][j+1] != -1) {jogo[i][j+1]++;};
                        if (jogo[i][j-1] != -1) {jogo[i][j-1]++;};
                        if (jogo[i-1][j] != -1) {jogo[i-1][j]++;};
                        if (jogo[i-1][j+1] != -1) {jogo[i-1][j+1]++;};
                        if (jogo[i-1][j-1] != -1) {jogo[i-1][j-1]++;};
                    }
                } else if (j == 0) {
                    if (jogo[i-1][j] != -1) {jogo[i-1][j]++;};
                    if (jogo[i+1][j] != -1) {jogo[i+1][j]++;};
                    if (jogo[i][j+1] != -1) {jogo[i][j+1]++;};
                    if (jogo[i-1][j+1] != -1) {jogo[i-1][j+1]++;};
                    if (jogo[i+1][j+1] != -1) {jogo[i+1][j+1]++;};
                } else if (j == 4) {
                    if (jogo[i-1][j] != -1) {jogo[i-1][j]++;};
                    if (jogo[i+1][j] != -1) {jogo[i+1][j]++;};
                    if (jogo[i][j-1] != -1) {jogo[i][j-1]++;};
                    if (jogo[i-1][j-1] != -1) {jogo[i-1][j-1]++;};
                    if (jogo[i+1][j-1] != -1) {jogo[i+1][j-1]++;};
                } else {
                    if (jogo[i][j-1] != -1) {jogo[i][j-1]++;};
                    if (jogo[i][j+1] != -1) {jogo[i][j+1]++;};
                    if (jogo[i-1][j] != -1) {jogo[i-1][j]++;};
                    if (jogo[i+1][j] != -1) {jogo[i+1][j]++;};
                    if (jogo[i+1][j+1] != -1) {jogo[i+1][j+1]++;};
                    if (jogo[i+1][j-1] != -1) {jogo[i+1][j-1]++;};
                    if (jogo[i-1][j+1] != -1) {jogo[i-1][j+1]++;};
                    if (jogo[i-1][j-1] != -1) {jogo[i-1][j-1]++;};
                }
            }
        }
    }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", jogo[i][j]);
        }
        printf("\n");
    }
    return 0;
}
