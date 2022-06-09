/*
6) Diseñe y haga el programa que calcule recursivamente la suma de N números enteros
*/

#include <stdio.h>

void suma();

int main(){

    suma();

}

void suma(){
    int total = 0;
    int numero = 0;
    while(1){
        printf("\nIntroduce un numero a sumar o presiona 0 para salir: ");
        scanf("%d",&numero);

        if(numero != 0){
            total += numero;
        }else{
            printf("\nTu total es:\t%d\n\n",total);
            break;
        }
    }
}