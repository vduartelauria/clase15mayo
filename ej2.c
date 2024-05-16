#include <stdio.h>
#define p printf
#define s scanf

int main(void) {

    unsigned int num, acum, cont;

    p("Ingrese un numero natural: ");
    s("%d", &num);

    acum = 0;

    p("Con For:\n");
    for (unsigned int i=1; i<=num; i++)
        acum+=i;
    
    p("La suma es %d", acum);

    cont = 1;
    acum = 0;

    p("\nCon While:\n");
    while(cont<=num) {
        acum+=cont;
        cont++;
    }
    
    p("La suma es %d", acum);

    return 0;
}