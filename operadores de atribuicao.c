#include <stdio.h>

int main(){
    /*
    Atribuição Simples (=)
    Atribuição com Soma (+=)
    Atribuição com Subtraçao (-=)
    Atribuição Multiplicação (*=)
    Atribuição Divisão (/=)
    */

int numero1 = 10, numero2, resultado;

resultado = 10;
printf("resultado: %d\n", resultado);

//resultado = resultado mais 20;
resultado += 20;
printf("resultado += 20: %d\n", resultado);

//resultado = a resultado menos a variavel numero1;
resultado -= numero1;
printf("resultado -= numero1: %d\n", resultado);

//resultado = a resultado miltiplicado por 5;
resultado *= 5;
printf("resultado *= 5: %d\n", resultado);

//resultado = a resultado dividido por 2;
resultado /= 2;
printf("resultado /=2: %d\n", resultado);

return 0;


}
