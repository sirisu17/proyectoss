                                                       multiplo de 3
#include <stdio.h>

int main() {
    int numero; 


    printf("Ingrese un número: ");
    scanf("%d", &numero);


    if (numero % 3 == 0) {
        printf("✅ El número %d es múltiplo de 3\n", numero);
    } else {
        printf("❌ El número %d NO es múltiplo de 3\n", numero);
    }

    return 0;
}
Este archivo hace que el usuario ingrese un numero y lo divide para verificar si puede llegar a ser un multiplo de 3

