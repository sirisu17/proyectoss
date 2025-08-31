# 📘 README – Catálogo de Libros en C

## 📌 Descripción
Este proyecto implementa un **gestor de catálogo de libros** en lenguaje C.  
El programa permite al usuario administrar una colección de libros mediante un menú interactivo, aplicando las operaciones básicas **CRUD**:  
- **Crear** (Agregar libros)  
- **Leer** (Mostrar/Buscar libros)  
- **Actualizar** (Modificar datos de un libro)  
- **Eliminar** (Borrar un libro del catálogo)  

Es un ejercicio introductorio que muestra cómo trabajar con **estructuras, arreglos, funciones y entradas de usuario**.  

---

## 📌 Características principales
- Almacena hasta 100 libros en memoria.  
- Cada libro contiene:
  - Código único (`codigo`)  
  - Título (`nombre`)  
  - Autor (`escritor`)  
  - Año de publicación (`publicacion`)  
- Menú con las siguientes opciones:
  1. Agregar libro  
  2. Eliminar libro  
  3. Modificar libro  
  4. Buscar libro por título  
  5. Mostrar todos los libros  
  0. Salir  

---

## 📌 Requisitos
- Compilador de C (ejemplo: **GCC** o el compilador integrado de Visual Studio).  
- Sistema operativo: Windows, Linux o macOS.  

---

## 📌 Instrucciones de uso
1. Clonar o descargar este repositorio.  
2. Abrir el archivo `catalogoLibros.c` en **Visual Studio**, **Code::Blocks** o cualquier IDE de C.  
3. Compilar el programa.  
4. Ejecutarlo en la terminal/ventana de consola.  
5. Navegar por el menú y utilizar las distintas opciones para gestionar los libros.  

---

## 📌 Ejemplo de ejecución
```
--- Catalogo de Libros ---
1. Agregar libro
2. Eliminar libro
3. Modificar libro
4. Buscar libro
5. Mostrar todos los libros
0. Salir
Seleccione una opcion: 1
Ingrese codigo: 101
Ingrese titulo: El Principito
Ingrese autor: Antoine de Saint-Exupéry
Ingrese año de publicacion: 1943
```

---

## 📌 Reflexiones
Este programa sirve como práctica para:  
- Manejo de **estructuras** en C.  
- Uso de **funciones** para modularizar el código.  
- Interacción con el usuario mediante **menús**.  
- Comprensión del ciclo básico de **CRUD**, aplicable en sistemas de bases de datos.  

---

## 📌 Conclusión
El proyecto constituye una **base sólida para introducirse en la programación en C**.  
Aporta experiencia en la organización de datos, modularización y desarrollo de aplicaciones con menús interactivos.  
Es un buen punto de partida para evolucionar hacia sistemas más complejos con almacenamiento en archivos o bases de datos reales.  
