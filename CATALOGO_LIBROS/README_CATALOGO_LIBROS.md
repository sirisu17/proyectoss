# Gestor de Libros en Consola

Bienvenido al proyecto **Gestor de Libros en Consola**.  
Este programa en C permite manejar un pequeño catálogo de libros directamente desde la terminal.

---

## Funcionalidades

* **Agregar Libros** → Registrar un libro con título, autor y año de publicación.
* **Mostrar Catálogo** → Ver todos los libros almacenados.
* **Buscar Libros** → Localizar un libro por su título o autor.
* **Uso en Consola** → Interacción mediante un menú sencillo.

---

## Herramientas Utilizadas

* **Lenguaje**: C  
* **Compilador**: GCC (se recomienda MinGW en Windows)

---

## Cómo Ejecutarlo

### Requisitos

* Tener instalado GCC. Verificar con:
  ```bash
  gcc --version
  ```

### Pasos en Windows (CMD)

1. Abre la carpeta del proyecto. En la barra de dirección escribe `cmd` y presiona Enter.  
2. Compila con:  
   ```bash
   gcc main.c -o gestor.exe
   ```  
   (Si hay más archivos: `gcc main.c funciones.c -o gestor.exe`)  
3. Ejecuta el programa:  
   ```bash
   ./gestor.exe
   ```

### IDEs o Plataformas Online

* **VS Code** → Instala la extensión "C/C++" y ejecuta con el botón de depuración.  
* **Visual Studio Community** → Proyecto de Consola en C, agregar archivos y ejecutar.  
* **Code::Blocks / Dev-C++** → Crear proyecto de consola, agregar archivos y compilar.  
* **Replit / JDoodle** → Pegar el código y ejecutar online.

---

## Uso del Programa

Una vez en ejecución, se mostrará un menú con opciones:

* `1` → Agregar libro  
* `2` → Listar catálogo  
* `3` → Buscar libro  
* `4` → Salir  

---

## Licencia

Este proyecto usa la Licencia MIT.
