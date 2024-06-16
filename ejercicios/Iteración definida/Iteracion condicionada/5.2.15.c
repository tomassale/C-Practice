/**************************************************************************************************************
El gobierno de la Ciudad de Buenos Aires realiza una encuesta a los estudiantes de los colegios
secundarios. Los primeros datos a ingresar son la fecha (dia, mes y año) y la cantidad de colegios de la ciudad
en que se realiza la encuesta.
**************************************************************************************************************/
/**************************************************************************************************************
De cada colegio se conoce: numero de escuela, la cantidad de alumnos inscriptos y la especialidad ('T':
tecnico, 'N': no tecnico).
**************************************************************************************************************/
/**************************************************************************************************************
De cada alumno del colegio que respondia la encuesta se conoce:
    *DNI
    *fecha de nacimiento (dia, mes y año)
    *sexo ('M' o 'F')
    *opinion con respecto a los conocimientos adquiridos ('B': buenos, 'M': malos).
Se identifica el fin de ingreso de datos de los alumnos que respondieron la encuesta por cada colegio con
ingreso 0 en el DNI del estudiante.
**************************************************************************************************************/
/**************************************************************************************************************
Validar todos los datos que se ingresan por teclado.
**************************************************************************************************************/
/**************************************************************************************************************
Informar:
a. Por cada colegio, el porcentaje de alumnos que contestaron la encuesta sobre la cantidad de
alumnos inscriptos del colegio.
b. Cantidad de estudiantes de colegio no tecnicos que respondieron la encuesta.
c. Porcentaje de mujeres de escuelas tecnicas sobre la cantidad de estudiantes que respondieron
la encuesta.
d. Porcentaje de estudiantes que respondieron que los conocimientos adquiridos eran malos,
sobre el total de encuestados.
e. Mayor edad de los estudiantes encuestados.
f. Numero del colegio con mayor opinion buena sobre los conocimientos adquiridos.
**************************************************************************************************************/

#include <stdio.h>
#include <ctype.h>
#include <limits.h>

int main() {
    int diaEncuesta, mesEncuesta, anioEncuesta, numeroEscuela, alumnosInscriptos, alumnosRespondieron, colegios,
        dni, diaAlumno, mesAlumno, anioAlumno,
        noTecnicos = 0, mayorEdad = 0, maxBuenasOpiniones = 0, colegioMaxOpiniones = 0,
        totalAlumnosEncuestados = 0, totalMalasOpiniones = 0, totalMujeresTecnicas = 0, totalAlumnosTecnicos = 0;
    int fechaEncuestaValida = 0, fechaAlumnoValida = 0;
    float porcentajeInscriptosContestados, porcentajeMujeresTecnicas, porcentajeMalos;
    char especialidad, sexoAlumno, opinionConocimientos;

    while (fechaEncuestaValida == 0) {
        printf("Ingrese la fecha de hoy (DD/MM/AAAA): ");
        scanf("%2d/%2d/%4d", &diaEncuesta, &mesEncuesta, &anioEncuesta);

        if (mesEncuesta < 1 || mesEncuesta > 12) {
            printf("Mes invalido. Por favor intente de nuevo.\n");
            continue;
        }
        if (diaEncuesta < 1) {
            printf("Dia invalido. Por favor intente de nuevo.\n");
            continue;
        }
        if (mesEncuesta == 1 || mesEncuesta == 3 || mesEncuesta == 5 || mesEncuesta == 7 ||
            mesEncuesta == 8 || mesEncuesta == 10 || mesEncuesta == 12) {
            if (diaEncuesta > 31) {
                printf("Dia invalido. Por favor intente de nuevo.\n");
                continue;
            }
        } else if (mesEncuesta == 4 || mesEncuesta == 6 || mesEncuesta == 9 || mesEncuesta == 11) {
            if (diaEncuesta > 30) {
                printf("Dia invalido. Por favor intente de nuevo.\n");
                continue;
            }
        } else if (mesEncuesta == 2) {
            int esBisiesto = (anioEncuesta % 4 == 0 && anioEncuesta % 100 != 0) || (anioEncuesta % 400 == 0);
            if (esBisiesto) {
                if (diaEncuesta > 29) {
                    printf("Dia invalido. Por favor intente de nuevo.\n");
                    continue;
                }
            } else {
                if (diaEncuesta > 28) {
                    printf("Dia invalido. Por favor intente de nuevo.\n");
                    continue;
                }
            }
        }
        fechaEncuestaValida = 1;
    }

    printf("Ingrese la cantidad de colegios: ");
    scanf("%d", &colegios);

    for (int i = 0; i < colegios; i++) {
        printf("\nIngresar numero de escuela: ");
        scanf("%d", &numeroEscuela);
        printf("Ingresar cantidad de alumnos inscriptos: ");
        scanf("%d", &alumnosInscriptos);

        especialidad = ' ';
        while (especialidad != 'T' && especialidad != 'N') {
            printf("Ingresar especialidad ('T' para tecnico, 'N' para no tecnico): ");
            scanf(" %c", &especialidad);
            especialidad = toupper(especialidad);
        }

        alumnosRespondieron = 0;
        int buenasOpiniones = 0;

        while (1) {
            printf("\nIngrese el DNI (0 para finalizar): ");
            scanf("%d", &dni);
            if (dni == 0) break;

            fechaAlumnoValida = 0;
            while (fechaAlumnoValida == 0) {
                printf("Ingrese la fecha de nacimiento (DD/MM/AAAA): ");
                scanf("%2d/%2d/%4d", &diaAlumno, &mesAlumno, &anioAlumno);

                if (mesAlumno < 1 || mesAlumno > 12) {
                    printf("Mes invalido. Por favor intente de nuevo.\n");
                    continue;
                }
                if (diaAlumno < 1) {
                    printf("Dia invalido. Por favor intente de nuevo.\n");
                    continue;
                }
                if (mesAlumno == 1 || mesAlumno == 3 || mesAlumno == 5 || mesAlumno == 7 ||
                    mesAlumno == 8 || mesAlumno == 10 || mesAlumno == 12) {
                    if (diaAlumno > 31) {
                        printf("Dia invalido. Por favor intente de nuevo.\n");
                        continue;
                    }
                } else if (mesAlumno == 4 || mesAlumno == 6 || mesAlumno == 9 || mesAlumno == 11) {
                    if (diaAlumno > 30) {
                        printf("Dia invalido. Por favor intente de nuevo.\n");
                        continue;
                    }
                } else if (mesAlumno == 2) {
                    int esBisiesto = (anioAlumno % 4 == 0 && anioAlumno % 100 != 0) || (anioAlumno % 400 == 0);
                    if (esBisiesto) {
                        if (diaAlumno > 29) {
                            printf("Dia invalido. Por favor intente de nuevo.\n");
                            continue;
                        }
                    } else {
                        if (diaAlumno > 28) {
                            printf("Dia invalido. Por favor intente de nuevo.\n");
                            continue;
                        }
                    }
                }
                fechaAlumnoValida = 1;
            }

            sexoAlumno = ' ';
            while (sexoAlumno != 'M' && sexoAlumno != 'F') {
                printf("Ingrese el sexo del alumno (M/F): ");
                scanf(" %c", &sexoAlumno);
                sexoAlumno = toupper(sexoAlumno);
            }

            opinionConocimientos = ' ';
            while (opinionConocimientos != 'B' && opinionConocimientos != 'M') {
                printf("Ingrese la opinion del alumno sobre los conocimientos adquiridos (B/M): ");
                scanf(" %c", &opinionConocimientos);
                opinionConocimientos = toupper(opinionConocimientos);
            }

            alumnosRespondieron++;
            totalAlumnosEncuestados++;

            if (especialidad == 'N') noTecnicos++;
            if (especialidad == 'T' && sexoAlumno == 'F') totalMujeresTecnicas++;
            if (especialidad == 'T') totalAlumnosTecnicos++;
            if (opinionConocimientos == 'M') totalMalasOpiniones++;
            if (opinionConocimientos == 'B') buenasOpiniones++;

            int edad = anioEncuesta - anioAlumno;
            if (mesEncuesta < mesAlumno || (mesEncuesta == mesAlumno && diaEncuesta < diaAlumno)) {
                edad--;
            }
            if (edad > mayorEdad) mayorEdad = edad;
        }

        porcentajeInscriptosContestados = (float)alumnosRespondieron / alumnosInscriptos * 100;
        printf("\nPorcentaje de alumnos que contestaron la encuesta en la escuela %d: %.2f%%\n", numeroEscuela, porcentajeInscriptosContestados);

        if (buenasOpiniones > maxBuenasOpiniones) {
            maxBuenasOpiniones = buenasOpiniones;
            colegioMaxOpiniones = numeroEscuela;
        }
    }

    porcentajeMujeresTecnicas = (float)totalMujeresTecnicas / totalAlumnosTecnicos * 100;
    porcentajeMalos = (float)totalMalasOpiniones / totalAlumnosEncuestados * 100;

    printf("\nCantidad de estudiantes de colegios no tecnicos que respondieron la encuesta: %d\n", noTecnicos);
    printf("Porcentaje de mujeres de escuelas tecnicas: %.2f%%\n", porcentajeMujeresTecnicas);
    printf("Porcentaje de estudiantes que respondieron que los conocimientos adquiridos eran malos: %.2f%%\n", porcentajeMalos);
    printf("Mayor edad de los estudiantes encuestados: %d\n", mayorEdad);
    printf("Numero del colegio con mayor opinion buena sobre los conocimientos adquiridos: %d\n", colegioMaxOpiniones);

    return 0;
}
