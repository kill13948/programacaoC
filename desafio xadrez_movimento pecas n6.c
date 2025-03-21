#include <stdio.h>
int main(){

printf("movimento peças xadrez!\n");
printf("\n");

int bispo =1;
int torre =1;
int rainha =1;


    printf("movimento bispo!\n");
    printf("\n"); 

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

    printf("\n");
    printf("movimento cavalo\n");

    printf("\n");

    int cavalo1, cavalo2;

    for (cavalo1 = 1; cavalo1 <= 2 ; cavalo1++)
    printf("cima\n");

    for (cavalo2 = 2; cavalo2 == 2; cavalo2++)
    {
     printf("esquerda\n");   
    }

        
    

  return 0;

}
