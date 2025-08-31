#include <stdio.h>

int main() {
    int i, numero, suma = 0; 

 
    for (i = 0; i < 20; i++) {
        printf("Ingrese el número #%d: ", i + 1);
        scanf("%d", &numero);
        suma += numero; 
    }

 
    printf("🔢 La suma total de los 20 números es: %d\n", suma);

    return 0;
}
