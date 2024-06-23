/****************************************************************************************************
Realizar los siguientes vectores con 10 valores reales. Confeccionar un programa para:
    a. Generar el vector VA con la informacion ingresada por teclado.
    b. Generar el vector VB, donde cada elemento es la raiz cuadrada del respectivo elemento de VA.
    (para el calculo de la raiz cuadrada utilizar la funcion sqrt disponible en la biblioteca math.h).
    Si el numero es negativo poner un 0 ya que no se puede calcular la raiz
    c. Calcular el vector VC como VA+VB.
    d. Copiar el vector VC en orden inverso en otro vector llamado VD.
    e. Hallar el valor maximo del vector VA y en que posicion se hallo (el mayor es unico).
    f. Generar un vector VE con aquellos valores negativos que se encuentran en el vector VA.
    g. Mostrar el contenido de todos los vectores.
FUNCIONES:
    I. Para el ingreso del vector VA, del punto a.
    II. Para generar el vector VC, del punto c.
    III. Para generar el vector VE del punto f.
    IV. Para mostrar los valores de todos los vectores del punto g.
****************************************************************************************************/

#include <stdio.h>
#include <math.h>

void IngresoVector(int[], int); //VA
void RaizCuadrada(int[], float[], int); //VB
void SumaVectores(int[], float[], float[], int); //VC
void VectorInverso(float[], float[], int); //VD
void ValoresNegativos(int[], int[], int); //VE
void ImprimirVectores(int[], float[], float[], float[], int[], int); //Vn

int main(){

    int
        VA[10],
        VE[10];
    float
        VB[10],
        VC[10],
        VD[10];

    IngresoVector(VA, 10);
    RaizCuadrada(VA, VB, 10);
    SumaVectores(VA, VB, VC, 10);
    VectorInverso(VC, VD, 10);
    ValoresNegativos(VA, VE, 10);
    ImprimirVectores(VA, VB, VC, VD, VE, 10);

    return 0;
}

void IngresoVector(int vec[], int med){
    for(int i = 0; i < med; i++){
        printf("Ingrese el valor de los vectores (%d de %d): ", i+1, med);
        scanf(" %d", &vec[i]);
    }
}

void RaizCuadrada(int vec1[], float vec2[], int med){
    for(int i = 0; i < med; i++){
        if(vec1[i] > 0){
            vec2[i] = (float)sqrt(vec1[i]);
        }else{
            vec2[i] = 0;
        }
    }
}

void SumaVectores(int vec1[], float vec2[], float vecFinal[], int med){
    for(int i = 0; i < med; i++){
        vecFinal[i] = (float)vec1[i] + vec2[i];
    }
}

void VectorInverso(float vecInv[], float vecFinal[], int med){
    for(int i = 1; i <= med; i++){
        vecFinal[i-1] = vecInv[med - i];
    }
}

void ValoresNegativos(int vec[], int vecFinal[], int med){
    for(int i = 0; i < med; i++){
        if(vec[i] < 0){
            vecFinal[i] = vec[i];
        }else{
            vecFinal[i] = 0; 
        }
    }
}

void ImprimirVectores(int vecA[], float vecB[], float vecC[], float vecD[], int vecE[], int med){
    printf("\nVA: ");
    for(int i = 0; i < med;i++){
        printf(" %d ", vecA[i]);
    }
    printf("\nVB: ");
    for(int i = 0; i < med;i++){
        printf(" %.2f ", vecB[i]);
    }
    printf("\nVC: ");
    for(int i = 0; i < med;i++){
        printf(" %.2f ", vecC[i]);
    }
    printf("\nVD: ");
    for(int i = 0; i < med;i++){
        printf(" %.2f ", vecD[i]);
    }
    printf("\nVE: ");
    for(int i = 0; i < med;i++){
        printf(" %d ", vecE[i]);
    }
}
