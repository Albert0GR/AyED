
## 1.El concepto del apuntador
---
## 2.DECLARACION DE UN APUNTADOR Y USO DE SUS OPERADORES 

En el  [Programa 2.1](programa1_2_1.cc) se muestra como declara una variable de tipo apuntador.Se muestra el uso del operador **&**, tambien llamado operador de **direccion** y el operador **_*_** , tambien llamado operador de **indireccion** o **desreferencia**.

**sizeof()** nos permite saber cuantos **_bytes_** ocupa la variable **x** en memoria.

> Programa 2.1
```c
/*  apuntador.cc
    uso de los operadores * y * 
    */
#include<stdio.h>

//la funcion main inicia la ejecuacion del programa 
int main(){
    int x=5;
    int *apx;   //con int * declaramos apx como tipo apuntador a entero
    apx= &x;    //apx toma la direccion de x

    printf("El valor de x es : %d \n El valor de *apx es: %d\n",x,*apx);
    printf("La direccion de x es : %p \n El valor de apx es: %p\n",&x,apx);

    /*Mostramos el tamaño de la variable x:
    El tamaño puede cambiar dependiendo del sisitema y del compilador
    */

   printf("Sizeof x: %d bytes \n",sizeof(x));

   return 0;
}

```
![image](/UNIT1/images/imgp2.png)

---
## 3.INICIALIZAR APUNTADORES

Todo apuntador debe inicializarse con  un valor conocido . De lo contrrio puede señalar hacia secciones de memoria totalmente arbitrarias (implica un riesgo). Este valor inicial puede corresponder con una direccion valida o , en su defecto , con un valor definido por el lenguaje, a que se conoce como **NULL**. Este ultimo es una convencion de **_C_** y significa que el apuntador aun no puede usarse.

**NOTA:** Si queremos usar el operador **_*_**  sobre un apuntador es iportante estar seguros de que el apuntador ya esta señalado hacia una variable . Sino es asi , el programa tedra un error en tiempo final de ejecución.

En el [Programa 3.1](programa1_3_1.cc) se ve un ejemplo de como inicializar un apuntador **NULL**
>programa 3.1

```c
/*apuntadorNulo.cc
    Todo apuntdor debe inicializarse para que no apunte hacia areas desconocidas o no inicializadas de la memoria
*/
#include<stdio.h>


int main(){

    int x=8, *apx, *apx2=NULL;

    printf("Apuntadores ANTES de la asignacion\n");
    printf("Valor de x: %d, direccion de x: %p\n",x,&x);
    printf("Valor de apx: %p, valor de apx2: %p\n\n",apx,apx2);

    apx= &x;
    apx2=&x;

    printf("Apuntadores DESPUES de la asignacion\n");
    printf("Valor de x: %d, direccion de x: %p\n",x,&x);
    printf("Valor de apx: %p, valor de apx2: %p\n\n",apx,apx2);
    return 0;

}
```
![image](/UNIT1/images/imgp3.png)

---
## 4.PASO POR VALOR Y POR REFERENCIA

---
## 5. APUTADOR A UN ARREGLO


---
## 6.VARIABLES ESTATICAS Y DINAMICAS


---
## ACTIVIDAD