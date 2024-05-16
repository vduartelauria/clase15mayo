#include <stdio.h>
#define p printf
#define s scanf

int main(void) {

    int num, mayor, menor;
    
    p("Ingrese un numero (Cero para salir): ");
    s("%d", &num);

    mayor = num;
    menor = num;

    while (num != 0) {
        do {
            if (num > mayor)
                mayor = num;
            else if (num < menor)
                menor = num;
            p("Ingrese un numero (Cero para salir): ");
            s("%d", &num);
        } while(num != 0);
        p("El mayor numero es %d\n", mayor);
        p("El menor numero es %d\n", menor);
    }
    return 0;
}