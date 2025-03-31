#include <stdio.h>

int main() {
    int linhas = 10;
    int colunas = 10;

    int tabulheiro[10][10] = { 
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    };

    // Imprimir as letras A a J para as colunas
    printf("   ");
    for (int j = 0; j < colunas; j++) {
        printf("%c  ", 'A' + j); // Imprime as letras de A a J
    }
    printf("\n");

    // Imprimir os números de 1 a 10 antes da primeira coluna (linhas) e a matriz
    for (int i = 0; i < linhas; i++) { 
        printf("%2d ", i + 1); // Imprime os números de 1 a 10 para as linhas
        for (int j = 0; j < colunas; j++) {
            printf("%d  ", tabulheiro[i][j]); // Imprime os valores da matriz com espaçamento
        }
        printf("\n"); // Quebra de linha após cada linha do tabuleiro
    }

    return 0;
}
 