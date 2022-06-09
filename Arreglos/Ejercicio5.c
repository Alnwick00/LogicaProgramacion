/*
5) Diseñe un programa que determine la media del numero de horas trabajadas durante todos
los días de la semana
*/

#include <stdio.h>

float media_horas();

int main(){
    
    printf("\nLa media de horas trabajadas es: %.2f\n\n",media_horas());

    return 0;
}

float media_horas(){

    float media = 0;

    float horas[7];

    for (int i = 0; i < 7; i++){

        printf("\nIntroduce el numero de horas del dia %d:\t",i+1);

        scanf("%f",&horas[i]);
    }   

    for (int i = 0; i < 7; i++){

        media += horas[i];

    }
    
    return media/7;

}

