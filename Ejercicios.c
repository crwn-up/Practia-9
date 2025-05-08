#include <stdio.h>

int main() {
    int arreglo[5];  // Puedes cambiar el tamaño
    int suma = 0;

    printf("Ingresa 5 números enteros:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arreglo[i]);
        suma += arreglo[i];
    }

    printf("La suma de los elementos es: %d\n", suma);
    return 0;
}


#include <stdio.h>

int main() {
    int arreglo[10];
    int numero, contador = 0;

    printf("Ingresa 10 números enteros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arreglo[i]);
    }

    printf("Ingresa el número que quieres buscar: ");
    scanf("%d", &numero);

    for (int i = 0; i < 10; i++) {
        if (arreglo[i] == numero) {
            contador++;
        }
    }

    printf("El número %d aparece %d veces en el arreglo.\n", numero, contador);
    return 0;
}


#include <stdio.h>

int main() {
    int arreglo[10];
    int positivos = 0, negativos = 0, nulos = 0;

    printf("Ingresa 10 números enteros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arreglo[i]);

        if (arreglo[i] > 0) {
            positivos++;
        } else if (arreglo[i] < 0) {
            negativos++;
        } else {
            nulos++;
        }
    }

    printf("Positivos: %d\n", positivos);
    printf("Negativos: %d\n", negativos);
    printf("Nulos (ceros): %d\n", nulos);
    return 0;
}







#include <stdio.h>

int main() {
    int pares[100];
    int i = 0;
    int numero = 2;

    // Llenar el arreglo con los primeros 100 números pares usando while
    while (i < 100) {
        pares[i] = numero;
        numero += 2;
        i++;
    }

    // Imprimir el arreglo
    i = 0;
    printf("Los primeros 100 números pares son:\n");
    while (i < 100) {
        printf("%d ", pares[i]);
        i++;
    }

    printf("\n");
    return 0;
}
