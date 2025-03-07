#include <stdio.h>
 int main(){

char estado;
char codigo [10];
char cidade [50];
int populacao;
float area;
float pib;
int pontos;

char ESTADO;
char CODIGO [10]; 
char CIDADE [30];
int POPULACAO;
float AREA;
float PIB;
int PONTOS;
 
printf("CARTA 1\n");

printf("digite uma letra entre A a H para indentificar o estado:\n");
scanf("%c", &estado);

printf("digite o codigo da carta 01 a 04:\n");
scanf("%s", &codigo);

printf("digite o nome da cidade:\n");
scanf("%s", &cidade);

printf("digite a populacao:\n");
scanf("%f", &populacao);

printf("digite a area em km:\n");
scanf("%f", &area);

printf("digite o pib:\n");
scanf("%f", &pib);

printf("digite o numero de pontos turisticos:\n");
scanf("%d", &pontos);

printf("carta 2\n");
printf("\n");

printf("Digite uma letra de A a H para indentificar o estado:\n");
scanf("%c",&ESTADO);

printf("digite o codigo da CARTA 01 a 04:\n");
scanf("%s", &CODIGO);

printf("digite o nome da CIDADE:\n");
scanf("%s", &CIDADE);

printf("digite a POPULACAO:\n");
scanf("%f", &POPULACAO);

printf("digite a AREA em km:\n");
scanf("%f", &AREA);

printf("digite o PIB:\n");
scanf("%f", &PIB);

printf("digite o numero de PONTOS turisticos:\n");
scanf("%d", &PONTOS);

printf("Dados da carta 1\n");

printf("estado:%c\n", estado);
printf("codigo:%s\n", codigo);
printf("cidade:%c\n", cidade);
printf("populacao:%f\n", populacao);
printf("area:%f\n", area);
printf("pib:%f\n", pib);
printf("pontos:%d\n", pontos);

printf("dados da carta 2\n");

printf("estado:%c\n", ESTADO);
printf("codigo:%s\n", CODIGO);
printf("cidade:%c\n", CIDADE);
printf("populacao:%f\n", POPULACAO);
printf("area:%f\n", AREA);
printf("pib:%f\n", PIB);
printf("pontos:%d\n", PONTOS);

  
if (populacao > POPULACAO)

{printf("carta1 e a vencedora com base na populcao\n");

}
if (populacao < POPULACAO){
    printf("carta2 e a vencedora\n");
}else{
    printf("AS DUAS CARTAS TEM A MESMA POPULACAO\n");
}

return 0;
 }

 
 