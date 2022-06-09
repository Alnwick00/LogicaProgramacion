/*
11) Dados los puntos de una pendiente, escriba una función que represente la ecuación de la recta
que la determina
*/

#include <stdio.h>
#include <stdlib.h>


void recta();

int main(){

recta();

return 0;
}

void recta(){
    float x1, x2, y1, y2;
    float pendiente;

    printf("\nIntroduce el valor de x del punto 1: \t");
    scanf("%f",&x1); 

    printf("\nIntroduce el valor de y del punto 1: \t");
    scanf("%f",&y1); 

    printf("\nIntroduce el valor de x del punto 2: \t");
    scanf("%f",&x2); 

    printf("\nIntroduce el valor de y del punto 2: \t");
    scanf("%f",&y2); 

    if(x2==x1){
        printf("\nLa recta es y = %.2f\n",x2);
        exit(0);
    }

    pendiente = ((y2-y1)/(x2-x1));

    printf("\n La recta es y = %.2f x + %.2f\n", pendiente, (pendiente*(-x1))+y1);


} 

