#include <stdio.h>

int main() {
    float calificaciones[5];
    float suma = 0.0;
    int i;

    // Capturar las 5 calificaciones
    for (i = 0; i < 5; i++) {
        printf("Ingresa la calificación %d: ", i + 1);
        scanf("%f", &calificaciones[i]);
        suma += calificaciones[i];
    }

    // Calcular el promedio
    float promedio = suma / 5;

    // Imprimir el promedio
    printf("El promedio del alumno es: %.2f\n", promedio);

    return 0;
}
