#include <stdio.h>
#define p printf
#define s scanf

int main(void)
{
    int cont;

    cont = 0;

    p("Ciclo while\n");
    while(cont<5) {
        p("Hola\n");
        cont++;
    }
    cont = 0;
        p("Ciclo do while\n");
    do {
        p("Hola\n");
        cont++;
    } while (cont<5);

        p("Ciclo for\n");

    for(cont=0; cont<5; cont++){
        p("Hola\n");
    }


    return 0;
}