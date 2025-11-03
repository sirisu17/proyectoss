# 🎰 Ruleta Virtual en C++

**Autores:** Ayrton Pellegatta y Matías Iñiguez  
**Materia:** Lenguajes de Programación  
**Institución:** Técnica N°2 de Munro

---

## 📋 Descripción del Proyecto

El proyecto consiste en simular una **ruleta de casino** utilizando el
lenguaje **C++**.  
El jugador comienza con una cantidad inicial de créditos y puede
realizar distintos tipos de apuestas.  
La ruleta genera un número aleatorio entre 0 y 36, con su respectivo
color (rojo, negro o verde).  
El objetivo es ganar la mayor cantidad posible de créditos antes de
quedarse sin saldo.

---

## 🧠 Funcionalidades Principales

- 🎯 **Apuestas disponibles:**
  1. **Número exacto (0–36)** → paga **35 a 1**.  
  2. **Par / Impar** → paga **2 a 1**.  
  3. **Rojo / Negro** → paga **2 a 1**.  
  4. **Bajo (1–18) / Alto (19–36)** → paga **2 a 1**.

- 💰 **Sistema de créditos:**
  - El jugador inicia con **100 créditos**.  
  - Cada ronda puede elegir cuánto apostar.  
  - Si gana, se suman créditos según la apuesta; si pierde, se restan.

- 🎨 **Colores:**
  - Los números se dividen en **rojos**, **negros** y el **0 verde**, simulando una ruleta real.

---

## 🧩 Lógica de Funcionamiento

1. Se genera un número aleatorio entre 0 y 36.  
2. Se determina su color (rojo, negro o verde).  
3. Se evalúa si el resultado coincide con la apuesta del jugador.  
4. Se actualiza el saldo de créditos.  
5. Se ofrece la opción de seguir jugando o salir.

---

## 🖥️ Ejecución del Programa

1. Abrir el sitio [JDoodle C++ Online Compiler](https://www.jdoodle.com/c-online-compiler).  
2. Seleccionar **C++ (g++ 17)** como lenguaje.  
3. Copiar y pegar el código fuente del proyecto.  
4. Hacer clic en **Execute**.  
5. Seguir las instrucciones en consola para apostar y jugar.

---

## 📜 Código Fuente

El código completo se encuentra dentro del archivo principal:

```
ruleta.cpp
```

Incluye:
- Generación aleatoria de números (`rand()` y `srand()`).  
- Control de créditos y apuestas.  
- Estructura de repetición `do-while` para continuar el juego.  
- Funciones auxiliares para determinar el color del número.

---

## 💡 Posibles Mejoras Futuras

- Agregar interfaz gráfica (por ejemplo, con SFML o Qt).  
- Implementar historial de apuestas ganadas/perdidas.  
- Añadir animación de giro de ruleta o colores en consola ANSI.  
- Guardar puntaje máximo en un archivo externo.
