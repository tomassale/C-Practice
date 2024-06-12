/*********************************************************************************************************
De cada uno de los alumnos de un curso se ingresa su número de DNI y las notas de los dos exámenes
parciales confeccionar, un programa que muestre por cada alumno su condición final con el siguiente
mensaje:
“El alumno con DNI: xxxxxxx, obtuvo las notas: xx y xx [condición final]”
La condición final se establece según las siguientes reglas:
• PROMOCIONA: ambas notas > = 7
• RINDE EXAMEN FINAL: ambas notas > = 4
• REPROBO LA MATERIA: alguna nota no cumple lo anterior
El programa finaliza cuando se ingresa un valor negativo como número de DNI. Al finalizar mostrar la nota
promedio de alumnos promocionados.
*********************************************************************************************************/

#include <stdio.h>
#include <string.h>

int main(){

    int dni;
    int
        primerParcial,
        segundoParcial,
        promocionados = 0;
    float
        promedioPromocionados,
        notaPromedio;
    char condicion[30];

    do{
        printf("\nIngrese el dni: ");
        scanf("%d", &dni);

        if(dni < 0){
            break;
        }

        printf("Ingrese las notas: ");
        scanf("%d %d", &primerParcial, &segundoParcial);

        if(primerParcial < 1 || primerParcial > 10){
            printf("\nNumero de nota del primer parcial incorrecto");
            continue;
        }else if(segundoParcial < 1 || segundoParcial > 10){
            printf("\nNumero de nota del segundo parcial incorrecto");
            continue;
        }

        if(primerParcial >= 7 && segundoParcial >= 7){
            promocionados++;
            notaPromedio += (primerParcial + segundoParcial) / 2.0;
            strcpy(condicion, "PROMOCIONA");
        }else if(primerParcial >= 4 && segundoParcial >= 4){
            strcpy(condicion, "RINDE EXAMEN FINAL");
        }else{
            strcpy(condicion, "REPROBO LA MATERIA");
        }

        printf("El alumno con DNI: %d, obtuvo las notas: %d y %d [%s]\n", dni, primerParcial, segundoParcial, condicion);
        printf("*******************************************************");
    }while(dni > 0);

    promedioPromocionados = notaPromedio / promocionados;
    printf("El promedio de notas de promocionados es: %.1f", promedioPromocionados);

    return 0;
}
