/********************************************************************************************************
Realizar una funcion que reciba por parametro dos vectores enteros de 5 elementos cada uno y genere un
vector de 10 posiciones con el contenido de ambos vectores uno a continuacion del otro. Mostrar el vector
generado.
********************************************************************************************************/

#include <stdio.h>

void SumaVectores(int[], int[], int[]);

int main(){

    int 
        vect1[5] = {1, 2, 3, 4, 5}, 
        vect2[5] = {6, 7, 8, 9, 10}, 
        vectorFinal[10];

    SumaVectores(vect1, vect2, vectorFinal);
    
    printf("El vector es: \n [");
    for(int i = 0;i < 10;i++){
        printf(" %d ", vectorFinal[i]);
    }
    printf(" ]");
    
    return 0;
}

void SumaVectores(int vect1[], int vect2[], int vectorFinal[]){

    for(int i = 0; i < 5; i++){
        vectorFinal[i] = vect1[i];
    }
    for(int i = 0; i < 5; i++){
        vectorFinal[i+5] = vect2[i];
    }

}