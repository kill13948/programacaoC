#include <stdio.h>
int main(){

printf("movimento peças xadrez!\n");
printf("\n");

    printf("movimento bispo!\n");
    printf("\n"); 


    int bispo = 1;
    int torre = 1;
    int rainha = 1;


     while (bispo <=5)
     {
        // bispo se mome na diagonal 5 casas, uma casa para cima, uma casa para direita//

      printf("cima\n");
      printf("direita\n");
      bispo++;
     } 

      printf("\n");

     //torre se move para a direita 5 casas//
     printf("movimento torre\n");
     printf("\n");

     for (torre = 1; torre <=5 ; torre++) {
        printf("Direita");
        printf("\n");

}

printf("\n");

    // a rinha se move 8 casas a esquerda//
    printf("movimento rainha!\n");
    printf("\n");

    do
{
    printf("esquerda!\n");
    rainha++;

    } while (rainha <= 8);
    printf("\n");

    return 0;










}
