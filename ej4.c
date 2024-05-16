#include <stdio.h>
#define p printf
#define s scanf

int main(void){
    
    unsigned int num, mul;

    p("Ingrese un numero: ");
    s("%d", &num);

    mul = 0;

    for(unsigned int i = 1; i <= num; i++){

        p("%d * %d = ", num, i);
        mul = num * i;
        p("%d\n", mul);
        mul = 0;
    }

    
    return 0;
}