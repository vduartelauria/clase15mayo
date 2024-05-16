#include <stdio.h>
#define p printf
#define s scanf

int main(void) {

    int base, exponente, resultado;

    p("Ingrese la base: ");
    s("%d", &base);
    p("Ingrese el exponente: ");
    s("%d", &exponente);

    resultado = 1;
    for (int i = 0; i < exponente; i++) {
        resultado *= base; 
    }

    p("Resultado: %d", resultado);

    return 0;
}