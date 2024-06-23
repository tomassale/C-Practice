/******************************************************************************************************
Realizar una funcion que reciba por parametro dos vectores enteros de 5 elementos cada uno y genere un
vector de 10 posiciones con el contenido de ambos vectores intercalados. Mostrar el vector generado.
******************************************************************************************************/

#include <stdio.h>

void CombinacionVector(int[], int[], int[], int);

int main(){

    int 
        vec1[5] = {1, 2, 3, 4, 5}, 
        vec2[5] = {1, 2, 3, 4, 5}, 
        vecFinal[10];

    CombinacionVector(vec1, vec2, vecFinal, 10);

    printf("El vector combinado es: \n\t[");
    for(int i = 0;i < 10;i++){
        printf(" %d ", vecFinal[i]);
    }
    printf("]");

    return 0;
}

void CombinacionVector(int vect1[], int vect2[], int vectorCombinado[], int med) {
    for (int i = 0; i < med; i++) {
        vectorCombinado[i*2] = vect1[i];
        vectorCombinado[i * 2 + 1] = vect2[i];
    }
}
