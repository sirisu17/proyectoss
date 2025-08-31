#include <stdio.h>

int main() {
    int numeros[20]; 
    int i;

    
    for (i = 0; i < 20; i++) {
        printf("Ingrese el número en la posición %d: ", i);
        scanf("%d", &numeros[i]);
    }

    
    printf("\n📍 Números en posiciones pares:\n");
    for (i = 0; i < 20; i++) {
        if (i % 2 == 0) { 
            printf("Posición %d: %d\n", i, numeros[i]);
        }
    }

    return 0;
}
