/*
4) Calcule el mayor y el menor de 2 números con una función que reciba solo 2 valores
*/

#include <stdio.h>
#include <stdlib.h>

float mayor(float, float);

int main(){


    float numero1=0, numero2=0;

    printf("\nIngresa un numero:\t");
    scanf("%f",&numero1);
    printf("\nIngresa otro numero:\t");
    scanf("%f",&numero2);
    
    
    printf("\nEl mayor es: %.1f\n\n", mayor(numero1, numero2));

return 0;
}

float mayor(float numero1, float numero2){


    if(numero1 > numero2){
        return numero1;
    }
    else if (numero1 == numero2){
        printf("Los numeros son iguales\n");
        exit(0);
    }else{
        return numero2;
    }
}
