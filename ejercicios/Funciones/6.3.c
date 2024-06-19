/**********************************************************************************************************
Se realizó un concurso de tiro al blanco. Por cada participante se ingresa un número que lo identifica y el
resultado de los disparos efectuados. El ingreso finaliza con un número de participante negativo.
Cada participante efectúa 5 disparos, registrándose las coordenadas X-Y de cada disparo.
• No considere disparos sobre los ejes, pero sí en el centro (si es sobre los ejes las coordenadas
deberán volver a ingresarse).
• Para determinar el cuadrante utilizar la función CUADRANTE que reciba las dos coordenadas y
retorne el cuadrante al cual pertenece (1 a 4) y 0 para indicar un tiro en el centro.
Para calcular el puntaje utilizar la función PUNTAJE que reciba 5 parámetros que representan la cantidad
disparos en cada cuadrante y en el centro. La función debe retornar el puntaje obtenido según la siguiente
escala:
✓ Cuadrantes 1 y 2: 50 puntos
✓ Cuadrantes 3 y 4: 40 puntos
✓ Centro: 100 puntos
Determinar:
a. El puntaje obtenido por cada participante, detallando cuantos disparos realizó en cada cuadrante.
b. Mostrar el número del participante ganador y el puntaje obtenido.
c. Calcular y mostrar la cantidad total de disparos en el centro (de todos los participantes)
********************************************************************************************************/

#include <stdio.h>

int Cuadrante(int, int);

int Puntaje(int, int, int, int, int);

int main() {
    int num_participante, x, y, cuadrante;
    int q1, q2, q3, q4, centro;
    int total_disparos_centro = 0;
    int max_puntaje = -1;
    int ganador = -1;

    while (1) {
        printf("Ingrese el numero del participante (negativo para finalizar): ");
        scanf("%d", &num_participante);
        
        if (num_participante < 0) {
            break;
        }

        q1 = q2 = q3 = q4 = centro = 0;

        for (int i = 0; i < 5; i++) {
            do {
                printf("Ingrese las coordenadas X Y del disparo %d: ", i + 1);
                scanf("%d %d", &x, &y);
                cuadrante = CUADRANTE(x, y);
                
                if (cuadrante == -1) {
                    printf("Disparo sobre los ejes, vuelva a ingresar.\n");
                }
            } while (cuadrante == -1);

            switch (cuadrante) {
                case 0:
                    centro++;
                    total_disparos_centro++;
                    break;
                case 1:
                    q1++;
                    break;
                case 2:
                    q2++;
                    break;
                case 3:
                    q3++;
                    break;
                case 4:
                    q4++;
                    break;
            }
        }

        int puntaje = Puntaje(q1, q2, q3, q4, centro);
        printf("Participante %d: Cuadrante 1: %d, Cuadrante 2: %d, Cuadrante 3: %d, Cuadrante 4: %d, Centro: %d, Puntaje: %d\n",
                num_participante, q1, q2, q3, q4, centro, puntaje);

        if (puntaje > max_puntaje) {
            max_puntaje = puntaje;
            ganador = num_participante;
        }
    }

    printf("El participante ganador es el numero %d con un puntaje de %d\n", ganador, max_puntaje);
    printf("La cantidad total de disparos en el centro es: %d\n", total_disparos_centro);

    return 0;
}

int Cuadrante(int x, int y) {
    if (x == 0 || y == 0) {
        return -1;
    } else if (x > 0 && y > 0) {
        return 1;
    } else if (x < 0 && y > 0) {
        return 2;
    } else if (x < 0 && y < 0) {
        return 3;
    } else if (x > 0 && y < 0) {
        return 4;
    } else if (x == 0 && y == 0) {
        return 0;
    }
}

int Puntaje(int q1, int q2, int q3, int q4, int center) {
    return (q1 + q2) * 50 + (q3 + q4) * 40 + center * 100;
}