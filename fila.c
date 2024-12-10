#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Pessoa {
    char nome[50];
    int idade;
    char atend[50];
    char pref[50];
};

struct Fila {
    struct Pessoa pessoa[100];
};

void inserirPreferencial(struct Fila *preferencial, int *indicePref) {
    char nome[50], pref[50];
    int idade;
    printf("Digite o nome: ");
    scanf("%s", nome);
    printf("Digite a idade: ");
    scanf("%d", &idade);
    printf("Digite a preferência(idoso/gestante/deficiente): ");
    scanf("%s", pref);
    struct Pessoa pessoa;
    strcpy(pessoa.nome, nome);
    pessoa.idade = idade;
    strcpy(pessoa.atend, "pref");
    strcpy(pessoa.pref, pref);
    preferencial->pessoa[*indicePref] = pessoa;
    *(indicePref)++;
}

void inserirNormal(struct Fila *normal, int *indiceNormal) {
    char nome[50];
    int idade;
    printf("Digite o nome: ");
    scanf("%s", nome);
    printf("Digite a idade: ");
    scanf("%d", &idade);
    struct Pessoa pessoa;
    strcpy(pessoa.nome, nome);
    pessoa.idade = idade;
    strcpy(pessoa.atend, "normal");
    strcpy(pessoa.pref, "nda");
    normal->pessoa[*indiceNormal] = pessoa;
    *(indiceNormal)++;
}

void removerPreferencial(struct Fila *preferencial, int *indicePref, int *tamanhoPref, int ind) {
    for (int i = ind; i < *tamanhoPref - 1; i++) {
        preferencial->pessoa[i] = preferencial->pessoa[i+1];
    }
    *(tamanhoPref)--;
    *(indicePref)--;
}

void removerNormal(struct Fila *normal, int *indiceNormal, int *tamanhoNormal, int ind) {
    for (int i = ind; i < *tamanhoNormal - 1; i++) {
        normal->pessoa[i] = normal->pessoa[i+1];
    }
    *(tamanhoNormal)--;
    *(indiceNormal)--;
}

void atenderFila(struct Fila *normal, struct Fila *preferencial, int *indiceNormal, int *tamanhoNormal, int *indicePref, int *tamanhoPref, int *vez) {
    if ((*vez) % 2 == 0) {
        for (int i = 0; i < *tamanhoPref; i++) {
            if (preferencial->pessoa[i].pref == "idoso") {
                removerPreferencial(&preferencial, &indicePref, &tamanhoPref, i);
                break;
            }
            if (i == *tamanhoPref - 1) {
                for (int j = 0; j < *tamanhoPref; j++) {
                    if (preferencial->pessoa[i].pref == "gestante") {
                        removerPreferencial(&preferencial, &indicePref, &tamanhoPref, j);
                        break;
                    }
                    if (j == *tamanhoPref - 1) {
                        for (int k = 0; k < *tamanhoPref - 1; k++) {
                            if (preferencial->pessoa[k].pref == "deficiente") {
                                removerPreferencial(&preferencial, &indicePref, &tamanhoPref, k);
                                break;
                            }
                        }
                    }
                }
            }
        }
        (*vez)++;
        } else {
            removerNormal(&normal, &indiceNormal, &tamanhoNormal, 0);
            (*vez)++;
        }
}

void listarFilas(struct Fila normal, struct Fila preferencial, int tamanhoNormal, int tamanhoPref) {
    printf("Preferencial: \n\n");
    for (int i = 0; i < tamanhoPref; i++) {
        printf("Nome: %s Idade: %d Prefêrencia: %s\n", preferencial.pessoa[i].nome, preferencial.pessoa[i].idade, preferencial.pessoa[i].pref);
    }
    printf("\n");
    printf("Normal: \n\n");
    for (int i = 0; i < tamanhoNormal; i++) {
        printf("Nome: %s Idade: %d\n", normal.pessoa[i].nome, normal.pessoa[i].idade);
    }
}

int main() {
    struct Fila normal;
    struct Fila preferencial;
    int run = 1;
    int op;
    int indiceNormal = 0;
    int indicePref = 0;
    int tamanhoNormal = 100;
    int tamanhoPref = 100;
    int vez = 0;
    while (run == 1) {
        printf("1-Inserir pessoa na fila preferencial\n2-Inserir pessoa na fila normal\n3-Remover pessoa da lista preferencial\n4-Remover pessoa da lista normal\n5-Atender pessoa\n6-Listar filas\n7-Sair\n");
        printf("Digite a opção desejada: ");
        scanf("%d", &op);
        switch (op) {
            case 1:
                inserirPreferencial(&preferencial, &indicePref);
                break;
            case 2:
                inserirNormal(&normal, &indiceNormal);
                break;
            case 3:
                int ind;
                printf("Digite a posição na fila da pessoa desejada: ");
                scanf("%d", &ind);
                removerPreferencial(&preferencial, &indicePref, &tamanhoPref, ind);
                break;
            case 4:
                int ind;
                printf("Digite a posição na fila da pessoa desejada: ");
                scanf("%d", &ind);
                removerNormal(&normal, &indiceNormal, &tamanhoNormal, ind);
                break;
            case 5:
                atenderFila(&normal, &preferencial, &indiceNormal, &tamanhoNormal, &indicePref, &tamanhoPref, &vez);
                break;
            case 6:
                printf("FIM DE EXECUÇÃO.");
                run = 0;
                break;
        }
    }
    return 0;
}