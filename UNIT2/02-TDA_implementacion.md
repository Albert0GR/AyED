# TIPOS DE DATOS ABSTRACTOS Y SU IMPLEMENTACION


## 1.TIPOS DE DATOS ABSTRACTOS

Un **TDA** (o **ADT** por su abreviatura en ingles ) es una modelo para tratamiento de un conjunto de datos , caracterizado por las operaciones que se pueden realizar sobre estos 
- Se trata de entidades matematicas por naturaleza utilizadas en el desarrollo y analisi de algoritmos
- Son una instancia de un principio general en la ingenieria de software entre ellos:
    - Abstraccion
    - Modularidad


---
## 2.CONSTRUCCION DE UN NODO

En el  [Programa 2.1](programa2_2_1.cc) se muestra como declara una variable de tipo apuntador.Se muestra el uso del operador **&**, tambien llamado operador de **direccion** y el operador **_*_** , tambien llamado operador de **indireccion** o **desreferencia**.

**sizeof()** nos permite saber cuantos **_bytes_** ocupa la variable **x** en memoria.

> Programa X.X
```c


```
![image](/UNITX/images/imgp2.png)



## 3.LISTA LIGADA SIMPLE



## 4.IMPLEMENTACION DE TDA USANDO ESTRUCTURAS DINAMICAS

Observa que nuestra lista  no esta llena sin embargo , si se presenta ahora una operacion de insercion tendriamos varias opciones:

- Rechazarla porque no 




Imaginemos un circulo que dividiomos en 5 secciones y a cada un la etiquetamos con un numero entre 0 y 4 (como un reloj de pared, pero solo con 5 marcas distribuidas uniformemente)
Nos interesa revisar sobre este modelo , la idea de su `sucesor` y `antecesor`

generalizar el mecaismo de conteo circular pensando en administrar un numero arbitrario `N`

1-  definir el conjunto de operaciones sobre los enteros modulo `N`
2   Sean `x` y `y` dos numeros entre `[0,N-1]` entonces `x+ymodN` sera el residuo de dividir `(x+N-y)` por `N`

> ejemplo
Sea N=7 enonces `x` y `y` puede ser cualquier pareja de numeros enteros en el intervalo `[0,6]`
para calcular el sucesor de 6 entonces , `6 + 1 % 7 = 0`

para calcular el antecesor de 0 entonces `0 - 1 % 7 = 0 +(7-1) % 7 =6`

que numero esta `3` posiciones adelante de 5 ?  entonces ` 5 + 3 % 7 =1`

que numero esta dos posiciones atras del 4? 4 - 2 % 7 =


### 3.XX TDA ESTATICO

1- el tamaño y el tipo de arreglo `N`  es fijo y se define antes de arrancar el programa , en tanto el tamaño de la lista que soporta puede variar desde `0` hasta `N - 1` elementos






