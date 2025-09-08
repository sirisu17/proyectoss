#include <stdio.h>
#include <string.h>

// Definición de la estructura
typedef struct {
    int codigo;
    char nombre[50];
    char escritor[50];
    int publicacion;
} Libro;

// Declaración de funciones
void agregarLibro(Libro coleccion[], int* total);
void eliminarLibro(Libro coleccion[], int* total);
void editarLibro(Libro coleccion[], int total);
void buscarLibro(Libro coleccion[], int total);
void listarLibros(Libro coleccion[], int total);

int main() {
    Libro coleccion[100];
    int total = 0;
    int opcion;

    do {
        printf("\n--- Catalogo de Libros ---\n");
        printf("1. Agregar libro\n");
        printf("2. Eliminar libro\n");
        printf("3. Modificar libro\n");
        printf("4. Buscar libro\n");
        printf("5. Mostrar todos los libros\n");
        printf("0. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1: agregarLibro(coleccion, &total); break;
            case 2: eliminarLibro(coleccion, &total); break;
            case 3: editarLibro(coleccion, total); break;
            case 4: buscarLibro(coleccion, total); break;
            case 5: listarLibros(coleccion, total); break;
        }
    } while(opcion != 0);

    return 0;
}

// Función para agregar libro
void agregarLibro(Libro coleccion[], int* total) {
    printf("Ingrese codigo: ");
    scanf("%d", &coleccion[*total].codigo);
    getchar(); // limpiar buffer
    printf("Ingrese titulo: ");
    fgets(coleccion[*total].nombre, 50, stdin);
    coleccion[*total].nombre[strcspn(coleccion[*total].nombre, "\n")] = '\0';
    printf("Ingrese autor: ");
    fgets(coleccion[*total].escritor, 50, stdin);
    coleccion[*total].escritor[strcspn(coleccion[*total].escritor, "\n")] = '\0';
    printf("Ingrese año de publicacion: ");
    scanf("%d", &coleccion[*total].publicacion);
    (*total)++;
}

// Función para eliminar libro
void eliminarLibro(Libro coleccion[], int* total) {
    int codigo, i, encontrado = 0;
    printf("Ingrese codigo a eliminar: ");
    scanf("%d", &codigo);
    for(i = 0; i < *total; i++) {
        if(coleccion[i].codigo == codigo) {
            for(int j = i; j < *total - 1; j++)
                coleccion[j] = coleccion[j+1];
            (*total)--;
            encontrado = 1;
            break;
        }
    }
    if(!encontrado) {
        printf("Libro no encontrado.\n");
    }
}

// Función para editar libro
void editarLibro(Libro coleccion[], int total) {
    int codigo, i;
    printf("Ingrese codigo del libro a modificar: ");
    scanf("%d", &codigo);
    for(i = 0; i < total; i++) {
        if(coleccion[i].codigo == codigo) {
            getchar();
            printf("Nuevo titulo: ");
            fgets(coleccion[i].nombre, 50, stdin);
            coleccion[i].nombre[strcspn(coleccion[i].nombre, "\n")] = '\0';
            printf("Nuevo autor: ");
            fgets(coleccion[i].escritor, 50, stdin);
            coleccion[i].escritor[strcspn(coleccion[i].escritor, "\n")] = '\0';
            printf("Nuevo año de publicacion: ");
            scanf("%d", &coleccion[i].publicacion);
            return;
        }
    }
    printf("Libro no encontrado.\n");
}

// Función para buscar libro
void buscarLibro(Libro coleccion[], int total) {
    char nombre[50];
    getchar();
    printf("Ingrese titulo a buscar: ");
    fgets(nombre, 50, stdin);
    nombre[strcspn(nombre, "\n")] = '\0';
    for(int i = 0; i < total; i++) {
        if(strcmp(coleccion[i].nombre, nombre) == 0) {
            printf("Codigo: %d\nTitulo: %s\nAutor: %s\nAño: %d\n",
                   coleccion[i].codigo, coleccion[i].nombre,
                   coleccion[i].escritor, coleccion[i].publicacion);
            return;
        }
    }
    printf("Libro no encontrado.\n");
}

// Función para listar libros
void listarLibros(Libro coleccion[], int total) {
    if(total == 0) {
        printf("No hay libros cargados.\n");
        return;
    }
    for(int i = 0; i < total; i++) {
        printf("\nCodigo: %d\nTitulo: %s\nAutor: %s\nAño: %d\n",
               coleccion[i].codigo, coleccion[i].nombre,
               coleccion[i].escritor, coleccion[i].publicacion);
    }
}
