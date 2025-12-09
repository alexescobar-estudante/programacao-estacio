#include <stdio.h>
 
/*        usando variaveis inteiras
    
    int main() {
    int a = 10;
    int b = 3;
    int soma = a + b;
    int diferenca = a - b;
    int produto = a * b;
    int quociente = a / b; // Note que a divisão de inteiros resulta em um número inteiro
 
    printf("Soma: %d\n", soma);
    printf("Diferença: %d\n", diferenca);
    printf("Produto: %d\n", produto);
    printf("Quociente: %d\n", quociente);
 
    return 0;
    }
*/



/*        usando variaveis flutuantes
    int main(){
    float x = 5.5;
    float y = 2.2;
    float soma = x + y;
    float diferenaca = x - y;
    float produto = x * y;
    float quociente = x / y; //divisao de ponto flutuante

    printf("soma %.2f\n", soma);
    printf("diferença %.2f\n", diferenaca);    
    printf("produto %.2f\n", produto);
    printf("quociente %.2f\n", quociente);

    return 0;

}
*/

/*        usadno conversao implicita
int main(){
    int a = 10;
    float b = 3.5;
    float resultado = a + b; // 'a' é convertido implicitamente para float

    printf("resultado: %.2f\n", resultado);

    return 0;

}
*/

int main(){
    int a = 10;
    int b = 3;
    float quociente = (float) a / b; // 'a' é explicitamente convertido para float (manobra chamada de casting)

    printf("Quociente: %.2f\n", quociente);

    return 0;
}