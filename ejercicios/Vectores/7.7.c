/********************************************************************************************************
Confeccionar un programa para:
    a. Generar los vectores necesarios para guardar la informacion ingresada por teclado. Se ingresa los
    datos de 300 articulos diferentes. De cada articulo se ingresa los siguientes datos:
    * Codigo de articulo (int, entre 1 y 500).
    * Clase de articulo (char, 'A' o 'B' o 'C' o 'D').
    * Numero de deposito donde se encuentra el articulo (int, entre 1 y 100).
    * Stock (int, entre 0 y 2000).
    * Punto de reposicion (int, entre 500 y 1000).
    b. Generar e informar el vector VB, que contenga los codigos de articulos de aquellos que hayan
    quedado con el stock igual a cero.
    c. Generar e informar el vector VC, que contengo a los codigos de articulos de aquellos que hayan
    quedado con stock por debajo del punto de reposicion.
    d. Generar e informar el vector VD, que contengo los codigos de articulos de aquellos que estan en los
    depositos entre el 15 y 50.
FUNCIONES:
    I. Para generar los vectores del punto a).
    II. Para generar el vector VB.
    III. Para generar el vector VC.
    IV. Para generar el vector VD.
********************************************************************************************************/

#include <stdio.h>
#include <ctype.h>

void IngresoDatos(int[], char[], int[], int[], int[], int);
void CodigosNeutros(int[], int[], int);
void StockNegativo(int[], int[], int[], int);
void FiltrarDeposito(int[], int[], int);

int main(){
    int
        codigoArticulo[300],
        numeroDeposito[300],
        stock[300],
        puntoReposicion[300];
    char claseArticulo[300];

    IngresoDatos(codigoArticulo, claseArticulo, numeroDeposito, stock, puntoReposicion, 300);
    CodigosNeutros(codigoArticulo, stock, 300);
    StockNegativo(codigoArticulo, stock, puntoReposicion, 300);
    FiltrarDeposito(codigoArticulo, numeroDeposito, 300);

    return 0;
}

void IngresoDatos(int vectCod[], char vectArt[], int vectDep[], int vectStock[], int vectRep[], int med){
    int productos = 0;
    while(productos < med){
        int codigo = 0,
        deposito = 0,
        stock = -1,
        reposicion = 0;
        char clase = 'E';
        printf("************************************\n");
        do{
            printf("Ingrese el codigo del producto (1 a 500): ");
            scanf(" %d", &codigo);
        }while(codigo < 1 || codigo > 500);
        if(codigo == 4){
            break;
        }
        do{
            printf("Ingrese la clase de articulo ('A', 'B', 'C' o 'D'): ");
            scanf(" %c", &clase);
            clase = toupper(clase);
        }while(clase != 'A' && clase != 'B' && clase != 'C' && clase != 'D');
        do{
            printf("Ingrese el numero de deposito (1 a 100): ");
            scanf(" %d", &deposito);
        }while(deposito < 1 || deposito > 100);
        do{
            printf("Ingrese la cantidad de stock (0 a 2000): ");
            scanf(" %d", &stock);
        }while(stock < 0 || stock > 2000);
        do{
            printf("Ingrese el punto de reposicion (500 a 1000): ");
            scanf(" %d", &reposicion);
        }while(reposicion < 500 || reposicion > 1000);
        vectCod[productos] = codigo;
        vectArt[productos] = clase;
        vectDep[productos] = deposito;
        vectStock[productos] = stock;
        vectRep[productos] = reposicion;
        productos++;
    }
}

void CodigosNeutros(int vectCod[], int vectStock[], int med){
    int VB[300] = {0};
    int cont = 0;
    for(int i = 0; i < med; i++){
        if(vectStock[i] == 0){
            VB[cont] = vectCod[i];
            cont++;
        }
    }
    printf("\nCodigos con stock neutro: \n");
    for(int i = 0; i < cont; i++){
        printf("%d\n", VB[i]);
    }
}

void StockNegativo(int vectCod[], int vectStock[], int vectRep[], int med){
    int VC[300] = {0};
    int cont = 0;
    for(int i = 0; i < med; i++){
        if(vectStock[i] < vectRep[i]){
            VC[cont] = vectCod[i];
            cont++;
        }
    }
    printf("\nLos codigos de stock negativo son: \n");
    for(int i = 0; i < cont; i++){
        printf("%d\n", VC[i]);
    }
}

void FiltrarDeposito(int vectCod[], int vectDep[], int med){
    int VD[300] = {0};
    int cont = 0;
    for(int i = 0; i < med; i++){
        if(vectDep[i] >= 15 && vectDep[i] <= 50){
            VD[cont] = vectCod[i];
            cont++;
        }
    }
    printf("\nLos codigos de depositos entre 15 y 50 son: \n");
    for(int i = 0; i < cont; i++){
        printf("%d\n", VD[i]);
    }
}
