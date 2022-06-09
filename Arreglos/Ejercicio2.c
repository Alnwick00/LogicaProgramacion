/*
2) Los resultados de las ultimas elecciones municipales correspondientes a varios distritos y
candidatos se almacenan en un arreglo de dos dimensione (distrito y candidatos). Diseñe
un programa que realice las siguientes tareas
a. Imprimir la tabla de votos por distrito y candidato
b. Calcular e imprimir el número total de votos recibidos por cada candidato y el
porcentaje total de votos emitidos. Así mismo, visualizar el candidato más votado
c. Si algún candidato recibe mas del 50% de los votos declararlo ganador
d. Si ningún candidato recibe mas del 50% de los votos, imprimir los dos más votados,
que son los que pasaran a la segunda vuelta de las elecciones
*/

#include <stdio.h>
#include <stdlib.h>

//Modificaar las constantes para moodificar # candidatos y # de distritos
#define num_candidato 3
#define num_distrito 3

//Se usa una estructura para no usar apuntadores

typedef struct{
    int eleccion[num_candidato][num_distrito];

}eleccion;

//Prototipos

eleccion llenado_casillas();
void tabla_votos(eleccion);
void votos_totales(eleccion);
void ganador(int votos[], int votos_totales);


int main(){

    eleccion mi_eleccion = llenado_casillas();

    tabla_votos(mi_eleccion);

    votos_totales(mi_eleccion);

    return 0;    
}


eleccion llenado_casillas(){

    eleccion mi_eleccion;

    for (int i = 0; i < num_candidato; i++){

        for (int j = 0; j < num_distrito; j++){

            printf("\nIntroduce los votos para el candidato %d en el distrito %d:\t",i+1,j+1);
            scanf("%d",&mi_eleccion.eleccion[i][j]);

        }
        
    }
return mi_eleccion;
}


void tabla_votos(eleccion mi_eleccion){

    for (int i = 0; i < num_candidato; i++){

        printf("\nCANDIDATO %d\n",i+1);
            
            for (int j = 0; j < num_distrito; j++){

                printf("\nVOTOS distrito %d: %d\n",j+1,mi_eleccion.eleccion[i][j]);

            }   
        

    }
    

}


void votos_totales(eleccion mi_eleccion){

    int votos_totales = 0;

    int votos_candidato[num_candidato];


    for (int i = 0; i < num_candidato; i++){

        votos_candidato[i] = 0;
    }
    

    for (int i = 0; i < num_candidato; i++){

        for (int j = 0; j < num_distrito; j++){

            votos_candidato[i] += mi_eleccion.eleccion[i][j];
        }

        
        votos_totales += votos_candidato[i];
    }

    printf("\n\nNumero total de votos: %d\n\n",votos_totales);



    for (int i = 0; i < num_candidato; i++){


        printf("\nVotos para candidato %d: %d %.2f %%\n\n",i+1,votos_candidato[i],((float)votos_candidato[i])/((float)votos_totales)*100);
    }

    ganador(votos_candidato, votos_totales);


}


//Este programa saldria muy rapido en python con diccionarios :(
//Opcion se puede implementar una lista ligada, o una pila, pero es mucho rollo :/

void ganador(int votos_candidato[], int votos_totales){

    int aux[num_candidato];
    int mayor = votos_candidato[0];
    int suma = 1;
    int bandera = 2;


    for (int i = 0; i < num_candidato; i++){

        aux[i] = 0;

    }
    

    for (int i = 0; i < num_candidato; i++){

       if (votos_candidato[i] >= mayor){

           mayor = votos_candidato[i];
           aux[i] = suma;
           suma++;
           if(mayor >= votos_totales/2){
               printf("\n\nEL GANADOR INDISCUTIBLE ES EL CANDIDATO %d CON %d VOTOS - %.2f %% DE LOS VOTOS", i+1, votos_candidato[i], ((float)votos_candidato[i])/((float)votos_totales)*100);
               exit(0);
           }

       }
       
    }

    printf("Los candidatos que pasan a la siguiente vuelta son: \n");

       for (int i = 0; i < num_candidato; i++){

           if((aux[i] == suma || aux[i] == (suma-2) || aux[i] == (suma-1)) && (bandera >0)){
           
            printf("\n\nCANDIDATO %d CON %d VOTOS - %.2f %% DE LOS VOTOS", i+1, votos_candidato[i], ((float)votos_candidato[i])/((float)votos_totales)*100);
            bandera--;
            }

       }
       
}
        
    


    
        
