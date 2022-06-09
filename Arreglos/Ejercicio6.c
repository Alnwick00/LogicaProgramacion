/*
6) Escriba un programa que permita buscar si un carácter existe en una cadena de caracteres
y calcular la frecuencia de aparición de un carácter en la cadena
*/

#include <stdio.h>
#include <string.h>

void cadenas();

int main(){
    cadenas();
    return 0;
}


void cadenas() {

    int frecuencia = 0, tamano = 0;

    char caracter = "a";
	
    char cadena[30]=""; 
	
	printf("Introduce una palabra o sentencia: ");
	
    fgets(cadena, 30, stdin);
	

    printf("\nIntroduce el caracter a buscar:\t");
    scanf("%c",&caracter);


	tamano = strlen(cadena) - 1; 

    for (int i = 0; i < tamano; i++){

        if(caracter == cadena[i]){
            frecuencia++;
        }

    }
    
    printf("\nEl caracter %c aparece %d veces en la cadena: ",caracter, frecuencia);
    puts(cadena);
    
}

