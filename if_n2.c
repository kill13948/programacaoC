#include <stdio.h>
int main(){

    float temperatura, umidade;
    int estoque, ESTOQUEMINIMO = 1000;
    printf(" entre com a temperatura! \n");
    scanf("%f", &temperatura);

    printf(" entre com a umidade! \n");
    scanf("%f", &umidade);

    printf(" entre com o estoque! \n");
    scanf("%d", &estoque);

    if (temperatura > 30)
    {printf(" temperatura esta alta!\n");
       }else{
        printf("temperatura normal!\n");
    }
    if (umidade > 26){
        printf("umidade elevada!\n");
    }else
    {printf("umidade normal!\n");
    }

    if (estoque > 1000)
    {printf(" estoque normal!\n");
    }else
    {printf(" estoque MINIMO!");
    }
    
        
    }
    

    
    
    













