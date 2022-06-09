/*5) Cree un programa que calcule la media de 3 números*/

#include <stdio.h>
#include <stdlib.h>

float media();

int main(){

    printf("\nLa media es: %.1f\n\n", media());

return 0;
}

float media(){

    float numero1 = 0, numero2 = 0, numero3 = 0;

    printf("\nIngresa el primer numero:\t");
    scanf("%f",&numero1);
    printf("\nIngresa el segundo numero:\t");
    scanf("%f",&numero2);
    printf("\nIngresa el tercer numero:\t");
    scanf("%f",&numero3);

    return (numero1+numero2+numero3)/3;

}
