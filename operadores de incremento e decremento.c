#include <stdio.h>

    /*
    incremento (++)
    pre-incremento (++a)
    pos-incremento (a++)
    
    drecremento (--)
    pre-decremento (--a)
    pos-decremento (a--)
    */

int main(){

    int numero1 = 1, resultado;
    //printf("antes incremento: %d\n", numero1);
    //numero1 = numero1 +1;
    //numero1 += 1;
    //pos incremento:
    //resultado = numero1;
    //numero++;
    //numero1++;
    //printf("apos incremento: %d\n", numero1);
   
   
   
    resultado = numero1++;
    printf("apos pós-incremento: - numero 1: %d - resultado: %d\n", numero1, resultado);
   
    resultado = ++numero1;
    printf("apos pré-incremento: - numero 1: %d - resultado: %d\n", numero1, resultado);
   

    resultado = numero1--;
    printf("apos pós-decremento: - numero 1: %d - resultado: %d\n", numero1, resultado);
    
    resultado = --numero1;
    printf("apos pré-decremento: - numero 1: %d - resultado: %d\n", numero1, resultado);
    //numero1 = numero1 -1;
    //numero1 -= 1;
    //numero1--;
    //printf("apos decremento: %d\n", numero1);


    return 0;
}




