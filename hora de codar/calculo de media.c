#include <stdio.h>

int main(){

    //as variaveis podem se declaradas juntas exemplo "int idade, matricula;"
int idade, matricula;
float altura;
char nome[50];

printf("digite sua idade: \n");
scanf("%d", &idade);

printf("digite sua altura: \n");
scanf("%f", &altura);

printf("digite o seu nome: \n");
scanf("%s", nome);

printf("digite sua matricula: \n");
scanf("%d", &matricula);

printf("\nnome do aluno: %s - matricula: %d \n", nome, matricula);
printf("idade: %d - altura: %.2f\n\n\n", idade, altura);

return 0;

}