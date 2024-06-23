/****************************************************************************************************
Se ingresan DNI, codigo de sector (1 a 5) y sueldo de los empleados de una empresa. Se sabe que como
maximo la empresa tiene 100 empleados. Se desea:
    a. Cargar los datos de los empleados mediante la funcion CargaEmpleados. La carga finaliza con un
    empleado con DNI 99.
    b. Generar un vector con la cantidad de empleados en cada sector mediante la funcion
    CuentaPorSector y mostrarlo en forma de listado.
    c. Determinar el importe total a pagar de sueldos mediante la funcion TotalAPagar.
****************************************************************************************************/

#include <stdio.h>

void CargaEmpleados(int, int, int);
int CuentaPorSector();
int TotalAPagar(int);

int main(){

    int 
        dni, 
        sector,
        empleados[100];
    float sueldo;

    return 0;
}

void CargaEmpleados(){
    
}