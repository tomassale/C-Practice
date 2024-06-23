/**********************************************************************************************************************
Construir una funcion que reciba dos vectores enteros de igual tamaño y retorne un 1 si son guales o un 0 sino lo son.
**********************************************************************************************************************/

#include <stdio.h>

int IgualdadVectores(int, int);

int main(){

    int
        vec1[5],
        vec2[5];

    int res = IgualdadVectores(sizeof(vec1), sizeof(vec2));
    printf("%d", res);

    return 0;
}

int IgualdadVectores(int vect1, int vect2){

    if(vect1 != vect2){
        return 0;
    }else{
        return 1;
    }
}
