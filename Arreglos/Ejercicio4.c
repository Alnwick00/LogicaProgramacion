/*
4) Calcular el mayor de una lista de números
*/
#include <stdio.h>


int num_mayor();

int main(){

    printf("\nEl mayor es %d\n\n",num_mayor());

    return 0;
}

int num_mayor(){

    int tamano = 5;

    int numeros[tamano];
    
    for (int i = 0; i < tamano; i++){

        printf("\nIntroduce un numero:\t");

        scanf("%d",&numeros[i]);
    }   

    int mayor = numeros[0];

    for (int i = 0; i < tamano; i++){

        if (numeros[i] > mayor){

            mayor = numeros[i];
        
        }

    }

    return mayor;
    

}

