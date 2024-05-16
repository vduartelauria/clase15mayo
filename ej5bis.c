#include <stdio.h>
#define p printf
#define s scanf

int main(void) {

    int num, mayor, menor, flag;

    flag = 0;
    do {
        p("Ingrese un numero (Cero para salir): ");
        s("%d", &num);

        if (flag == 0) {
            flag = 1;
            mayor = num;
            menor = num;
        } else if (num > mayor && num != 0) 
            mayor = num;
        else if (num < menor && num != 0)
            menor = num;
    } while(num != 0);

    p("El mayor numero es %d\n", mayor);
    p("El menor numero es %d\n", menor);

    return 0;
}