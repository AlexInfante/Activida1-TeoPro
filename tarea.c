#include<stdio.h>
int main(){

//el inverso de un numero
float numero, inverso;
    
    // Pedir al usuario que ingrese un número
    printf("Ingrese un número: ");
    scanf("%f", &numero);
    
    // Calcular el inverso del número
    inverso = 1 / numero;
    
    // Mostrar el inverso
    printf("El inverso de %f es: %f\n", numero, inverso);

//potencia
double base, exponente, resultado;

    // Pedir al usuario que ingrese la base y el exponente
    printf("Ingrese la base: ");
    scanf("%lf", &base);
    printf("Ingrese el exponente: ");
    scanf("%lf", &exponente);

    // Calcular la potencia usando la función pow()
    resultado = pow(base, exponente);

    // Mostrar el resultado
    printf("%.2lf elevado a %.2lf es igual a %.2lf\n", base, exponente, resultado);

//raiz cuadrada
 double numero, raiz;

    // Pedir al usuario que ingrese el número
    printf("Ingrese un número: ");
    scanf("%lf", &numero);

    // Calcular la raíz cuadrada usando la función sqrt()
    raiz = sqrt(numero);

    // Mostrar el resultado
    printf("La raíz cuadrada de %.2lf es %.2lf\n", numero, raiz);


//la secuencia de fibonacci  n numeros
void fibonacci(int n) {
    int primero = 0, segundo = 1, siguiente, i;

    printf("Secuencia de Fibonacci hasta el término %d:\n", n);
    printf("%d, %d, ", primero, segundo);

    for (i = 3; i <= n; i++) {
        siguiente = primero + segundo;
        printf("%d, ", siguiente);
        primero = segundo;
        segundo = siguiente;
    }
    printf("\n");
}


return 0;
}