#include <stdio.h>
  int main(){

printf("carta 1\n");
  
 char estado = 'A';
 char codigo [10] = "A01";
 char cidade [10] = "Santos";
 int populacao = 140000.00;
 float Area = 9000.00;
 float PIB = 7000.00;
 int pontos = 12 ;

printf( "digite o estado: %c\n", estado);
scanf("%c", &estado);
printf( "digite o codigo: %s\n", codigo);
scanf("%s", &codigo);
printf("digite a cidade: %s\n", cidade);
scanf("%s", &cidade);
printf( "digite a populacao: %d\n", populacao);
scanf("%d", &populacao);
printf("digite a area: %f\n", Area);
scanf("%f", &Area);
printf( "digite o PIB: %f\n", PIB);
scanf("%f", &PIB);
printf( "numeros de pontos turisticos: %d\n", pontos);
scanf("%d", &pontos);

return 0;

}

 
 



