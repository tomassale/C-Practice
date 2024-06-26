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

void CargaEmpleados(int[], int[], float[], int*);
void CuentaPorSector(int[], int);
void TotalAPagar(float[], int);

int main() {
    int dniEmpleados[100];
    int sectorEmpleados[100];
    float sueldoEmpleados[100];
    int numEmpleados = 0;

    CargaEmpleados(dniEmpleados, sectorEmpleados, sueldoEmpleados, &numEmpleados);
    CuentaPorSector(sectorEmpleados, numEmpleados);
    TotalAPagar(sueldoEmpleados, numEmpleados);

    return 0;
}

void CargaEmpleados(int vect1[], int vect2[], float vect3[], int *numEmpleados) {
    while (*numEmpleados < 100) {
        int dni, sector;
        float sueldo;

        do {
            printf("Ingrese el dni (o 99 para finalizar): ");
            scanf("%d", &dni);
        } while (dni <= 0 || dni > 60000000);

        if (dni == 99) {
            printf("\nCarga de empleados finalizada.\n");
            break;
        }

        do {
            printf("Ingrese el sector (1 a 5): ");
            scanf("%d", &sector);
        } while (sector < 1 || sector > 5);

        do {
            printf("Ingrese el sueldo: ");
            scanf("%f", &sueldo);
        } while (sueldo <= 0);

        printf("***********************\n");

        // Almacenar datos en los arreglos
        vect1[*numEmpleados] = dni;
        vect2[*numEmpleados] = sector;
        vect3[*numEmpleados] = sueldo;

        // Incrementar contador de empleados
        (*numEmpleados)++;
    }
}

void CuentaPorSector(int vect[], int numEmpleados) {
    int sector[5] = {0};

    for (int i = 0; i < numEmpleados; i++) {
        switch (vect[i]) {
            case 1:
                sector[0]++;
                break;
            case 2:
                sector[1]++;
                break;
            case 3:
                sector[2]++;
                break;
            case 4:
                sector[3]++;
                break;
            case 5:
                sector[4]++;
                break;
            default:
                break;
        }
    }

    for (int i = 0; i < 5; i++) {
        printf("Sector %d: %d empleados\n", i + 1, sector[i]);
    }
}

void TotalAPagar(float vect[], int numEmpleados) {
    float total = 0;

    for (int i = 0; i < numEmpleados; i++) {
        total += vect[i];
    }

    printf("El total a pagar en sueldos es: $%.2f\n", total);
}
