/********************************************************************************************************
Realizar un programa que al ingresar solicite el ingreso de dos n�meros enteros y luego muestre por
pantalla el siguiente men� (las xx de los n�meros deben ser reemplazadas con los valores
correspondientes):
Men� de Opciones
---- -- --------
Numero 1: xx Numero 2: xx
1) Sumar
2) Restar
3) Multiplicar
4) Dividir
5) Ingresar Nuevos N�meros
6) Salir
Ingrese su opci�n:
Al ingresar el n�mero de la opci�n del 1 al 4, se realiza la operaci�n y muestra el resultado hasta que se
presione una tecla. Luego vuelve a mostrar el men� para poder realizar otra operaci�n con los mismos
n�meros. La opci�n 5 pide el ingreso de dos nuevos n�meros de trabajo mientras que la opci�n 6 sale y
cierra el programa.
El ingreso de la opci�n debe estar validado y en caso de ingresarse un n�mero no v�lido debe solicitarlo
nuevamente.
Usar una funci�n para mostrar el men� y retornar el valor elegido.
*********************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int menu(int , int);
int operacion(int , int , int);

int main() {
    int num1, num2, opcion, resultado;

    printf("Ingrese dos numeros enteros: ");
    scanf("%d %d", &num1, &num2);

    while (1) {
        opcion = menu(num1, num2);

        if (opcion == 6) {
            printf("Programa finalizado\n");
            break;
        } else if (opcion == 5) {
            printf("Ingrese dos numeros enteros: ");
            scanf("%d %d", &num1, &num2);
        } else if (opcion >= 1 && opcion <= 4) {
            resultado = operacion(opcion, num1, num2);
            printf("\nEl resultado de la operacion es: %d\n", resultado);
            system("pause"); // Pausa hasta que se presione una tecla
        } else {
            printf("Opcion invalida. Intente nuevamente.\n");
        }
    }

    return 0;
}

int menu(int num1, int num2) {
    system("cls");
    int opcion;

    printf("Menu de Opciones");
    printf("\n---- -- --------");
    printf("\nNumero 1: %d Numero 2: %d", num1, num2);
    printf("\n1) Sumar\n2) Restar\n3) Multiplicar\n4) Dividir");
    printf("\n5) Ingresar Nuevos Numeros\n6) Salir");
    printf("\nIngrese su opcion: ");
    scanf("%d", &opcion);

    return opcion;
}

int operacion(int oper, int num1, int num2) {
    int res;

    switch (oper) {
    case 1:
        res = num1 + num2;
        break;
    case 2:
        res = num1 - num2;
        break;
    case 3:
        res = num1 * num2;
        break;
    case 4:
        if (num2 != 0) {
            res = num1 / num2;
        } else {
            printf("Error: Division por cero.\n");
            res = 0;
        }
        break;
    default:
        printf("Opcion invalida en operacion.\n");
        res = 0;
        break;
    }

    return res;
}

