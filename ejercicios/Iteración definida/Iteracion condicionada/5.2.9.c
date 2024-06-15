/************************************************************************************************************
Se desea realizar un programa para calcular el sueldo final a pagar a cada empleado de una empresa. De
cada uno se tiene, sueldo básico, antigüedad, cantidad de hijos y estudios superiores (‘S’ o ‘N’). Además, se
conocen los porcentajes de aumento del sueldo que dependen de los siguientes factores:
• Si el empleado tiene más de 10 años de antigüedad: aumento del 10%
• Si el empleado tiene más de 2 hijos: aumento del 10%, si solo tiene uno 5%
• Si el empleado posee estudios superiores: aumento del 5%
Luego de ingresar los datos de un empleado se debe preguntar si se desea ingresar otro empleado o no. Se
termina la carga cuando no se deseen ingresar más empleados.
Determinar:
a. Por cada empleado: número de empleado, el sueldo básico y el nuevo sueldo.
b. Sueldo nuevo promedio de la empresa.
************************************************************************************************************/

#include <stdio.h>
#include <ctype.h>

int main(){

    float sueldoBasico, nuevoSueldo, sueldoPromedio;
    int empleado = 0, hijos, antiguedad;
    char estudios, ingresoEmpleados;

    do{
        printf("Ingrese el sueldo basico: ");
        scanf(" %f", &sueldoBasico);
        printf("Ingrese años de antiguedad: ");
        scanf(" %d", &antiguedad);
        printf("Ingrese cuantos hijos tiene: ");
        scanf(" %d", &hijos);
        printf("¿Tiene estudios superiores?(Indicar con S o N): ");
        scanf(" %c", &estudios);
        printf("¿Desea seguir ingresando empleados?: ");
        scanf(" %c", &ingresoEmpleados);
        empleado++;
        estudios = toupper(estudios);
        ingresoEmpleados = toupper(ingresoEmpleados);

        nuevoSueldo = sueldoBasico;

        if(antiguedad > 10){
            nuevoSueldo += sueldoBasico * 0.1;
        }
        if(hijos > 2){
            nuevoSueldo +=  sueldoBasico * 0.1;
        }else if(hijos == 1){
            nuevoSueldo *= sueldoBasico * 0.05;
        }
        if(estudios == 'S'){
            nuevoSueldo += sueldoBasico * 0.05;
        }

        sueldoPromedio += nuevoSueldo;

        printf("\n************************\n");
        printf("Numero de empleado: %d\n", empleado);
        printf("Sueldo basico: %.2f\n", sueldoBasico);
        printf("Sueldo nuevo: %.2f\n", nuevoSueldo);
        printf("**************************\n");
    }while(ingresoEmpleados == 'S');

    sueldoPromedio /= empleado;
    printf("\nSueldo promedio: %.2f", sueldoPromedio);

    return 0;
}
