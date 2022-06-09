/*
2) Cree un programa que calcule volumen de una esfera, mientras que el radio que se introduzca sea
mayor a cero
*/

#include <stdio.h>

#define PI 3.141592

float volumen_esfera(float);



int main(){

    float radio = 0;

    printf("\nIntroduce el radio de la esfera:  \t");
    scanf("%f",&radio);
    if(radio > 0){
        printf("\nEl volumen de la esfera es: %.2f unidades cubicas\n\n", volumen_esfera(radio));
    }else{
        printf("\nERROR: El radio no puede ser igual o menor a 0\n\n");
    }

return 0;
}


float volumen_esfera(float radio){

    return (4 * PI * radio * radio * radio)/3;

}


