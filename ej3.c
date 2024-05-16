#include <stdio.h>
#define p printf
#define s scanf

int main(void) {
    
    unsigned int num, acum;

    p("Ingrese un numero: ");
    s("%d", &num);

    acum = 0;

    for(unsigned int i = 1; i < num; i++){
        acum += num * i;
    }

    p("El factorial es: %d", acum);
    
    return 0;
}