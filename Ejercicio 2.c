// Ejercicio 2
// Luis Crown
#include <stdio.h>

int main() {
    float calificaciones[5];
    float suma = 0;
    int i;

    for (i = 0; i < 5; i++) {
        printf("Ingresa la calificación %d: ", i + 1);
        scanf("%f", &calificaciones[i]);
        suma += calificaciones[i];
    }
    float promedio = suma / 5;

    printf("El promedio del alumno es: %.2f\n", promedio);

    return 0;
}
