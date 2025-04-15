#include <stdio.h>

int main() {
    int linhas = 10;
    int colunas = 10;

    int tabuleiro[10][10]={0};
    printf("\n");

    // tamno do navio//
    int tamanho_navio = 3;

    // decalaracao vetores navio//
    int navio_horizontal[3]={0};
    int navio_vertical[3]={0};
    int navio_diagonal[3]={0};
    
    // codenadas dos navios//
    int i_horizontal = 2, j_horizontal = 5;
    int j_vertical = 2, i_vertical = 4;
    int i_diagonal = 4, j_diagonal = 5 ;
   

    // navio diagonal secundaria//
    for (int i = 0; i < tamanho_navio; i++){
       if (i_diagonal + i < linhas && j_diagonal - i >= 0){
        tabuleiro[i_diagonal + i][j_diagonal - i] = 3;
        navio_diagonal[i]= i_diagonal + i;
       }

    }
    
    // navio diagonal primaria//
   for (int i = 0; i < tamanho_navio; i++){
     if (i_diagonal + 1 < linhas && j_diagonal + 1 < colunas){
        tabuleiro[i_diagonal + i][j_diagonal + i]= 3;
        navio_diagonal[i]= i_diagonal + i;
     }
   }
   //imprime navio diagonal no tabuleiro//
   for (int i = 0; i < linhas; i++){
    for (int j = 0; j < colunas; j++){
       printf("%d", tabuleiro[i][j]);
    }
    printf("\n");
        
     
   }
    //navio horizontal no tabuleiro//]
   for (int j = 0; j < tamanho_navio; j++){
if (j_horizontal + j < colunas )
{
    tabuleiro[i_horizontal][j_horizontal + j]= 3;
    navio_horizontal[j] = j_horizontal +j;
}
    }
    // navio vertival no tabuleiro//
    for (int i = 0; i < tamanho_navio; i++){
if (i_vertical + i < linhas )
 {

    tabuleiro[i_vertical + i][j_vertical] = 3;
    navio_vertical[i] = i_vertical + i;
 }
    }
    printf("\n");

    // Imprimir as letras A a J para as colunas
    printf("\n");
    for (int j = 0; j < colunas; j++) {
        printf("%c  ", 'A' + j); // Imprime as letras de A a J
    }
    printf("\n");

    // Imprimir os números de 1 a 10 antes da primeira coluna (linhas) e a matriz
    for (int i = 0; i < linhas; i++) { 
        printf("%2d ", i + 1); // Imprime os números de 1 a 10 para as linhas
        for (int j = 0; j < colunas; j++) {
            printf("%d  ", tabuleiro[i][j]); // Imprime os valores da matriz com espaçamento
        }
        printf("\n"); 
    }


   
    return 0;
}
 