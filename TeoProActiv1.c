/*La función scanf en el lenguaje C se utiliza para leer datos desde la entrada estándar (generalmente el teclado) y asignarlos a una o más variables
La función printf en C se utiliza para imprimir datos en la pantalla o en otro tipo de salida, como un archivo.
Los diferentes tipos de datos en c son: char, int, float, short, double, long, long double*/

#include <stdio.h> // libreria pricipal
//Inicio del programa ´Usuario´
int main(){
    int firstadd; //declaracion de la variable entero
    float secadd; //declaracion de la variable decimal
    char operation[30]; //declaracion de la variable caracter

    printf ("Querido usuario, bienvenido\n");//mensaje inicial
    printf ("Por favor conteste las siguientes preguntas:\n");
    /*con la función printf le decimos al usuario lo que tiene que hacer
    y con la función scanf leemos los datos proporcionados y le asignamos a las variables previamente establecidas*/
    printf ("¿Cuánto es el valor de 371+52?\n");
    scanf ("%d", &firstadd); //%d es para dar el valor a un entero, utilizamos % + la variable (en este caso firtsadd)
    printf ("¿Cuánto es 92.5+5.4?\n");
    scanf ("%f", &secadd);//%f es para dar el valor a un decimal, utilizamos %+ la varible
    printf ("¿Cuál es tu operación favorita?\n");
    scanf ("%s", operation);//%s es para dar el valor a un caracter, colocamos la variable directamente

    /*Por último mostramos al usuario los resultados, en este caso de la encuesta que se le realizó
    utilizamos la función printf*/
    printf ("Los resultados fueron:\n");
    printf ("La suma de 371 + 52 es 423, su respuesta fue: %d\n", firstadd);
    printf ("La suma de 92.5 y 5.4 es 97.9, su respuesta fue: %f\n", secadd);
    printf ("Su operación favorita es: %s\n", operation);

    printf ("Gracias por su tiempo\n Lindo día");//mensaje de despedida

    return 0;

}//fin del programa