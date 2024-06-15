/********************************************************************************************
Se ingresan datos de los empleados de una empresa. Por cada empleado se ingresa:
• Legajo (entero entre 1000 y 5000)
• Sueldo básico (float mayor a 1000)
• Antigüedad en años (mayor o igual a 0)
• Sexo (‘M' o 'F')
• Categoría (entero entre 1 a 5)
Por cada empleado ingresado se debe calcular el sueldo final a abonar sabiendo que:
• Las Categorías 2 y 3 tienen $500 de bonificación.
• La Categoría 4 tiene 10% de bonificación.
• La Categoría 5 tiene 30% de bonificación.
• Si la antigüedad es mayor a 10 años recibe una bonificación del 10% adicional.
Todos los datos ingresados deben ser validados. El ingreso finaliza con un legajo igual a cero.
Informar:
• El sueldo a abonar a cada empleado.
• Cantidad de empleados de más de 10 años de antigüedad.
• El mayor sueldo y el legajo del empleado que cobra dicho sueldo.
• Cantidad de hombres y de mujeres.
*********************************************************************************************/

#include <stdio.h>
#include <ctype.h>
#include <limits.h>

int main() {
    int
        legajo,
        categoria,
        antiguedad,
        hombres = 0,
        mujeres = 0,
        legajoMayor,
        empleadosMas10 = 0;
    float
        sueldoBasico,
        sueldoFinal,
        sueldoMayor = INT_MIN;
    char
        sexo,
        ingreso;

    do {
        legajo = -1;
        while (legajo < 1000 || legajo > 5000) {
            printf("Legajo (1000-5000): ");
            scanf(" %d", &legajo);
        }

        if (legajo == 0) {
            printf("\nPrograma finalizado\n");
            break;
        }

        sueldoBasico = 0;
        while (sueldoBasico < 1000) {
            printf("Sueldo Basico (mayor a 1000): ");
            scanf(" %f", &sueldoBasico);
        }

        antiguedad = -1;
        while (antiguedad < 0) {
            printf("Anios de antiguedad (0 o mas): ");
            scanf(" %d", &antiguedad);
        }

        sexo = ' ';
        while (sexo != 'M' && sexo != 'F') {
            printf("Sexo del empleado (M o F): ");
            scanf(" %c", &sexo);
            sexo = toupper(sexo);
        }

        categoria = -1;
        while (categoria < 1 || categoria > 5) {
            printf("Categoria (1-5): ");
            scanf(" %d", &categoria);
        }

        sueldoFinal = sueldoBasico;

        if (sexo == 'M') {
            hombres++;
        } else if (sexo == 'F') {
            mujeres++;
        }

        if (categoria == 2 || categoria == 3) {
            sueldoFinal += 500;
        } else if (categoria == 4) {
            sueldoFinal += sueldoBasico * 0.1;
        } else if (categoria == 5) {
            sueldoFinal += sueldoBasico * 0.3;
        }

        if (antiguedad > 10) {
            empleadosMas10++;
            sueldoFinal += sueldoBasico * 0.1;
        }

        printf("\n******************");
        printf("\nSueldo Final: %.2f", sueldoFinal);
        printf("\n******************\n");

        if (sueldoFinal > sueldoMayor) {
            sueldoMayor = sueldoFinal;
            legajoMayor = legajo;
        }

        ingreso = ' ';
        while (ingreso != 'S' && ingreso != 'N') {
            printf("\nDesea seguir ingresando empleados? (S o N): ");
            scanf(" %c", &ingreso);
            ingreso = toupper(ingreso);
        }

    } while (ingreso != 'N');

    printf("\nEmpleados con mas de 10 anios de antiguedad: %d", empleadosMas10);
    printf("\nSueldo mayor: %.2f y legajo: %d", sueldoMayor, legajoMayor);
    printf("\nCantidad de hombres: %d", hombres);
    printf("\nCantidad de mujeres: %d", mujeres);

    return 0;
}
