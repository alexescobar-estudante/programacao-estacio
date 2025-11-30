/* pense nas variaveis como caixas onde guardamos coisas dentro, 
declarar uma variavel é o ato de colocar nome na caixa e dizer 
o que dentro dela */
#include <stdio.h>

//  tipo             nome
//  caixa       rotulo da caixa

int main(){
    int             idade = 42; //cuidar para sempre inicializar a variavel com '=' ou ela ficara aleatoria
    int             quantidade = 1;
    float           altura = 1.75;
    double          peso = 88.5;
    char            letra = 'A'; // sempre colocar '' na letra
    char            nome[4] = "alex";


/* regras de nomeação de variaveis

Criar nomes de variáveis claros e significativos é uma prática essencial na programação. 
Aqui estão algumas regras e dicas para nomear variáveis em C:


Comece com uma letra ou sublinhado (_)
Nomes de variáveis devem começar com uma letra (a-z, A-Z) ou um sublinhado (_). 
Eles não podem começar com um número. 

int idade;      // Correto 
int altura;      // Correto 
int 1salario;      // Incorreto 


Em seguida, use apenas letras, números e sublinhados.
Depois do primeiro caractere, você pode usar letras, números e sublinhados. 

int altura2;     // Correto 
int salario_3;     // Correto 


Case-sensitive
Nomes de variáveis são sensíveis a maiúsculas e minúsculas. Isso significa que idade e 
Idade são variáveis diferentes.

int idade;
int Idade; 


Não use palavras reservadas
Evite usar palavras reservadas da linguagem C, como nomes de variáveis 
(por exemplo, int, float, return). 

int int;       // Incorreto 
int return;    // Incorreto     


Inicialização de variáveis
Inicializar uma variável significa colocar um valor inicial dentro da caixa. Isso pode ser feito na mesma linha em que você declara a variável ou depois, no meio do seu código. Vamos ver alguns exemplos!
 
int idade = 25;        // Declara "idade" e atribui o valor 25
float altura;           // Declara "altura" sem inicializar
altura = 1.75;         // Atribui o valor 1.75 a "altura" posteriormente
double salario = 3000.50; // Declara "salario" e atribui o valor 3000.50
char opcao = 'S';        // Declara "opcao" e atribui o caractere ‘S’
 
Aqui, estamos criando as variáveis e colocando valores iniciais nelas ao mesmo tempo.

Para inicializar variáveis do tipo char você precisa colocar o caractere entre aspas simples ‘ ‘.



Tipos de dados primitivos
São como etiquetas que você coloca nas suas caixas (variáveis) para indicar que tipo de valor elas 
podem armazenar. Diferentes tipos de dados são usados para diferentes propósitos. 
A Linguagem C tem 5 diferentes tipos básicos: char, int, float, void, double. 
Vamos explorar os tipos de dados primitivos em C.

Tipos de dados Inteiros (int) 
Os inteiros são números sem casas decimais. Eles são usados quando você precisa contar ou trabalhar com 
números inteiros. Por exemplo, int idade = 25; armazena a idade de uma pessoa.

int idade = 25;

Tipos de dados de ponto flutuante (float e double) 
Os números de ponto flutuante são usados para representar números com casas decimais. 
Existem dois tipos principais: float e double . A diferença entre eles é a precisão. 
float ocupa menos espaço na memória, mas tem menos precisão do que double.

float altura = 1.75;
 
double salario = 3000.50;

Tipo de dados (void)

Void é um tipo de dado especial que representa a ausência de um tipo. 
Ele é usado em situações onde uma função não retorna nenhum valor ou quando um ponteiro não tem um 
tipo específico.


Tipos de dados – caractere (char)
O tipo char armazena caracteres como números inteiros que representam sua posição na tabela 
ASCII (American Standard Code for Information Interchange). A tabela ASCII mapeia caracteres 
(letras, números, símbolos) para números de 0 a 127. Por exemplo, o caractere 'A' é representado 
pelo número 65.

char inicial = 'A';




Comentário
Quando usar float e quando usar double?  Quando você está programando em C e precisa de números decimais 
com uma precisão muito alta e uma faixa de valores ampla, aí é hora de usar double. Essa é uma opção que 
oferece mais precisão do que o float, permitindo lidar com cálculos muito precisos, como em aplicações 
científicas ou financeiras. Então, se você está trabalhando com números que exigem muitos dígitos depois
da vírgula e precisa de um intervalo maior de valores, o double é a escolha certa para garantir que suas 
operações sejam precisas e eficazes.

Uso de strings


Além de armazenar caracteres individuais, podemos também trabalhar com sequências de caracteres, 
conhecidas como strings que são sequências de caracteres armazenadas como arrays (conjuntos) de char, 
terminadas por um caractere especial chamado caractere nulo (\0). Esse caractere indica o fim da string.

 

char nome[20] = "Alice";  // Declara um array de 20 caracteres e inicializa com "Alice"
 

No exemplo acima, nome pode armazenar até 19 caracteres mais o caractere nulo. A manipulação de strings 
requer cuidado para evitar buffer overflows (escrever além dos limites do array). Arrays e manipulação de 
strings serão abordados com mais detalhes posteriormente na disciplina.
*/
}