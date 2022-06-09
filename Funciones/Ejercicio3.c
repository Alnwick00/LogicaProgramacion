/*
3) Cree un programa que calcule el área de las siguientes figura geométricas: Rectángulo, cubo,
cilindro
*/

#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>

#define CLEAR "\e[1;1H\e[2J"

float area_rectangulo();
float area_cubo();
float area_cilindro();
void menu();

int main(){


menu();

return 0;
}


void menu(){
    
    int opcion = 0;
    while(1){

        printf("\nIngresa el numero de figura a calcular: \n\t1)Rectangulo\n\t2)Cubo\n\t3)Cilindro\n\t4)Salir\n\n");
        
        scanf("%d", &opcion);
        
        switch (opcion){
                
            case 1:
                printf(CLEAR);
                printf("El area es: %.2f\n\n",area_rectangulo());
                break;
            
            case 2:
                printf(CLEAR);
                printf("El area es: %.2f\n\n",area_cubo());
                break;
            
            case 3:
                printf(CLEAR);
                printf("El area es: %.2f\n\n",area_cilindro());
                break;
            case 4:
                printf(CLEAR);
                printf("\n\n Has elegido salir... Adios\n\n");
                exit(0);
            default:
                printf(CLEAR);
                printf("\n\nHas cometido un error... Adios\n\n");
                exit(0);
                break;
        }
    }

}


float area_rectangulo(){

    float lado_a = 0;
    float lado_b = 0;

    printf(CLEAR);
    
    printf("\n\nIngresa el lado a:\t");
    scanf("%f",&lado_a);
    
    printf("\n\nIngresa el lado b:\t");
    scanf("%f",&lado_b);

    return lado_a*lado_b;
    
}


float area_cubo(){


    float lado = 0;

    printf(CLEAR);
    
    printf("\n\nIngresa el lado del cubo:\t");
    scanf("%f",&lado);

    return 6*lado*lado;

}

float area_cilindro(){

    float radio = 0;
    float altura = 0;

    printf(CLEAR);
    
    printf("\n\nIngresa el radio:\t");
    scanf("%f",&radio);
    
    printf("\n\nIngresa la altura:\t");
    scanf("%f",&altura);

    return (2*radio*3.141592*altura)+(2*3.141592*radio*radio);


}
