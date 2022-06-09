/*
1) Escriba un procedimiento que acepte como parámetros un vector o arreglo que puede
contener elementos duplicados, el procedimiento debe sustituir cada elemento duplicado
por un -5 y devolver el numero de entradas modificadas y el arreglo modificado
*/

#include <stdio.h>

void modifica_arreglos(int arreglo[], int tamano);

int main(){

    int tamano = 10;
    int numeros[tamano];

    for (int i = 0; i < tamano; i++){

        printf("\nIntroduce un numero:\t");
        scanf("%d",&numeros[i]);
    }

    modifica_arreglos(numeros,tamano);


return 0;
}

void modifica_arreglos(int arreglo[], int tamano){
    
    int repetidos = 0;
    int aux[tamano];

    for (int i = 0; i < tamano; i++){

        aux[i]=0;
    }

    for (int i = 0; i < tamano; i++){

        for (int j = 0; j < i; j++){

            if ((arreglo[i] == arreglo[j]) && (aux[i] != 1 || aux[j] != 1)){
                aux[i]=1;
                aux[j]=1;
            }

        }
        
    }

    for (int i = 0; i < tamano; i++){
        
        repetidos += aux[i];

        printf("\nOriginal: %d\t",arreglo[i]);

        if (aux[i] != 0){
            arreglo[i] = -5;
        }
        printf("Modificado: %d\n\n",arreglo[i]);
         
    }
    
    printf("\n\n Numero de Modificaciones: %d\t\n\n",repetidos);
    
}

