# Proyecto de Alturas en C

Este proyecto en C se centra en la determinación de alturas en función de la calle y la altura ingresadas por el usuario. La aplicación permite al usuario ingresar una calle y una altura, y luego calcula y muestra las alturas resultantes según ciertas condiciones predefinidas.

## Características del Proyecto

- **Alturas Función de la Calle:** El programa utiliza una función `alturas` que toma la calle, la altura, y otros parámetros como entrada. Esta función calcula y muestra las alturas basadas en la paridad de la calle y ciertas condiciones adicionales.

- **Validación de Entrada:** Se implementa una validación de entrada para asegurar que la calle esté dentro del rango permitido (2 a 225) y que la altura cumpla con ciertos criterios (por ejemplo, número positivo y límite superior de 4998).

- **Multiplicación y Conversión de Cadenas:** La altura ingresada como cadena se multiplica por 2 después de convertirla a un número entero. Esto se realiza utilizando las funciones `atoi` y `strncpy`.

- **Manejo de Errores Críticos:** En caso de que la entrada no cumpla con los criterios establecidos, se emite un mensaje de "ERROR CRITICO" y se finaliza la ejecución del programa.

## Instrucciones de Uso

1. Ejecute el programa.
2. Ingrese la calle cuando se le solicite.
3. Si la calle es válida, ingrese la altura.
4. El programa calculará y mostrará las alturas según las condiciones establecidas.

**Nota:** Para finalizar la ejecución, simplemente ingrese 0 como valor de calle.

## Construcción y Ejecución

```bash
gcc Taxi.c -o Taxi
./app Taxi
# AplicacionTaxiEnC
