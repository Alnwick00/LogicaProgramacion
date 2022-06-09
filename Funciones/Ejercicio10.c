/*

10) Escriba un programa recursivo que calcule la suma de los N primeros números naturales

*/

#include <stdio.h>


int suma_iterativa(int tope);
int suma_recursiva(int tope);


int main(){

int tope = 0;

printf("\nIntroduce el tope a sumar: \t");
scanf("%d",&tope);

printf("\nLa suma recursiva total es %d\n",suma_recursiva(tope));
printf("\nLa suma iterativa total es %d\n",suma_iterativa(tope));


return 0;
}

int suma_iterativa(int tope){
    int total = 0;

    for (int i = 1; i <= tope; i++){

        total += i;

    }
return total;
}

int suma_recursiva(int tope){

    if(tope == 1){
        return 1;
    }else{
        return suma_iterativa(tope-1)+tope;
    }


}



