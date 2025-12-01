/*
Nesse exemplo, você pôde ver a variável idade que é um inteiro que armazena o valor 25. 
 A linha printf("Idade: %d anos\n", idade) imprime a saída: “Idade: 25 anos”. Nesse caso, o %d é utilizado 
 para formatar e exibir esse valor como um inteiro.

 

A variável altura é um float que armazena o valor 1.75 e a linha printf("Altura: %.2f metros\n", altura) 
 vai imprimir a saída “Altura: 1.75 metros”. Perceba que o especificador de formato utilizado é o %.2f que 
 formata e exibe esse valor como um número de ponto flutuante com duas casas decimais.

 

Na linha seguinte, você pode ver a impressão de uma variável do tipo double. A saída do comando será 
 “Saldo Bancário: 12345.67 reais”. Perceba que é utilizado o mesmo especificador de formato que foi 
 empregado no float “%2f”.

 

A variável inicial é um caractere (char) que armazena a letra 'A'. 
 printf("Inicial do Nome: %c\n", inicial) que irá imprimir “Inicial do Nome: A”; usa %c para formatar e 
 exibir esse valor como um caractere.


Entrada de dados com scanf

Existem várias formas de obter entrada de dados em um programa, mas, aqui, focaremos o uso da função 
 scanf. Essa é uma das formas mais comuns e úteis de ler dados do usuário em programas escritos em C.

Comentário
 A função scanf é usada para ler dados fornecidos pelo usuário e armazená-los em variáveis. 
 Pense em scanf como uma maneira de pegar informações do mundo exterior e colocá-las dentro das 
 "caixas" (variáveis) do seu programa.

Sintaxe básica de scanf

A forma geral do comando scanf é a seguinte:


scanf(''formato'', &variavel);


Aqui, "formato" especifica o tipo de dado que você espera que o usuário insira, e &variavel é o endereço 
 da variável onde o dado será armazenado.

Atenção
 Você precisa sempre colocar o caractere “&” antes de cada variável que será lida.

Exemplo:
  #include <stdio.h>
 
    int main() {
      int idade;
      printf("Digite sua idade: \n");
      scanf("%d", &idade);
      printf("Sua idade é: %d\n", idade);
      return 0;
    }


A função printf("Digite sua idade: "); é usada para imprimir texto na tela. A string "Digite sua idade: " é exibida exatamente como está escrita. Esse texto serve como uma instrução para o usuário saber o que deve fazer a seguir.

 

A função scanf("%d", &idade); é usada para ler a entrada do usuário. O especificador de formato %d indica
 que esperamos um valor do tipo int (inteiro). O símbolo & antes do nome da variável (idade) é necessário 
 para passar o endereço da variável, permitindo que scanf armazene o valor inserido pelo usuário 
 diretamente nessa variável.

 

A função printf("Sua idade é: %d\n", idade); é usada novamente para imprimir texto na tela. Dessa vez, a 
 string de formatação "Sua idade é: %d\n" inclui o especificador %d, que será substituído pelo valor da 
 variável idade. O \n no final da string adiciona uma nova linha após a exibição da mensagem, movendo o 
 cursor para a linha seguinte.


Entrada de Dados com scanf (Lendo Strings)


A função scanf também pode ser usada para ler strings do usuário, mas com uma importante ressalva: por 
 padrão, ela lê apenas até o primeiro espaço em branco. Isso significa que se o usuário digitar um nome 
 completo (com espaços), apenas a primeira parte do nome (até o primeiro espaço) será lida.

 

char nome[50];
 
printf("Digite seu nome: ");
 
scanf("%s", nome);
 

printf("Nome digitado: %s\n", nome);
 

Se o usuário digitar "João da Silva", apenas "João" será armazenado em nome. "da Silva" será deixado no 
 buffer de entrada e poderá causar problemas em leituras subsequentes.

 

Lendo Strings com Espaços: fgets

 

Para ler strings com espaços em branco, a função fgets é a melhor opção. Ela lê uma linha inteira da 
 entrada, incluindo espaços, até encontrar um caractere de nova linha (\n) ou atingir o tamanho máximo 
 especificado.

 

char nome[50];
 
printf("Digite seu nome completo: ");
 
fgets(nome, 50, stdin); // Lê no máximo 49 caracteres da entrada padrão (stdin)
 

// fgets inclui o '\n' na string, então podemos removê-lo se necessário
 
nome[strcspn(nome, "\n")] = 0;
 

printf("Nome completo digitado: %s\n", nome);
 

fgets recebe três argumentos:
 O array onde a string será armazenada.
 O tamanho máximo da string (incluindo o \n e o \0).
 O fluxo de entrada (geralmente stdin para a entrada padrão do teclado).
 

A linha nome[strcspn(nome, "\n")] = 0; remove o caractere de nova linha (\n) que fgets pode incluir na 
 string. strcspn retorna o índice da primeira ocorrência de \n na string nome.


Resumindo
 Dominar a entrada e saída de dados é essencial para interagir com os usuários e obter informações úteis 
 para o seu programa. Pratique bastante usando scanf e printf para se familiarizar com essas funções.

*/


#include <stdio.h>
 
int main() {
    int idade = 25;
    float altura = 1.75;
    double saldoBancario = 12345.67;
    char inicial = 'A';
    char nome[20] = "Bruno";
 
    printf("Idade: %d anos\n", idade);
    printf("Altura: %.2f metros\n", altura);
    printf("Saldo Bancário: %.2f reais\n", saldoBancario);
    printf("Inicial do Nome: %c\n", inicial);
    printf("Nome: %s\n", nome);
 
    return 0;


    /*
    Sintaxe básica de printf

A sintaxe básica de printf é: 


printf(''texto com formatação'', variavel1, variavel2, ...);


Aqui, "texto com formatação" é uma string que pode conter texto e especificadores de formato para as 
variáveis que você deseja exibir.


Exemplo simples de printf: vamos começar com um exemplo simples, no qual exibimos uma mensagem na tela 
sem usar variáveis.

Exemplo de uso com variáveis: ao utilizar o printf para imprimir variáveis, é necessário colocar o nome 
da variável e o especificador de formato. Veja a sintaxe a seguir.

printf(“%formato1 %formato2”, variável1, variável2);


Aqui, "%formato1 %formato2" são os especificadores de formato correspondentes aos tipos das variáveis que 
você deseja exibir. Esses especificadores são elementos essenciais para controlar a formatação dos dados 
nas funções de entrada e saída da linguagem C, como printf e scanf. Cada especificador de formato é 
precedido por um caractere % e indica o tipo de dado da variável que será exibida. Para cada variável que 
você deseja imprimir, é necessário acrescentar um especificador de formato correspondente.

 

A seguir, você tem uma lista dos principais especificadores utilizados:

 

%d: Imprime um inteiro no formato decimal.
 
%i: Equivalente a %d.
 
%f: Imprime um número de ponto flutuante no formato padrão.
 
%e: Imprime um número de ponto flutuante na notação científica.
 
%c: Imprime um único caractere.
 
%s: Imprime uma cadeia (string) de caracteres.

Dica
Pesquise outros especificadores de formato e seus modificadores, que permitem personalizar a exibição 
dos dados.
    

Em C#, especificadores de formato variam para cada tipo de dado, mas incluem formatos padrão 
 como "d" (decimal) e "x" (hexadecimal) para números, e formatos de data/hora como "d" (curto) e "D" 
 (longo) para o tipo DateTime. Existem também formatos personalizados para controle mais detalhado. 


Especificadores de formato para números (depurador)
 %d: Inteiro decimal.
 %h: Inteiro hexadecimal.
 %o: Inteiro octal sem sinal.
 %x: Inteiro hexadecimal.
 %X: Inteiro hexadecimal (maiúsculo).
 %Nq: Cadeia de caracteres sem aspas. 

Especificadores de formato padrão para datas e horas 
 &d: Data no formato curto.
 &D: Data no formato longo.
 &f: Data e hora longas (formato completo).
 &u: Padrão classificável universal de data/hora.
 &U: Padrão universal de data/hora completo. 
 
Especificadores de formato personalizados (exemplos) 
 &s: O segundo (de 0 a 59).
 &SS: O segundo com zero à esquerda (de 00 a 59).
 &t: O primeiro caractere do designador AM/PM.
 &TT: O designador AM/PM (ex: PM).
 &zz: Diferença de horas em relação ao UTC.
 &zzz: Diferença de horas e minutos em relação ao UTC. 

Especificadores para formatação customizada
 "\": Caractere de escape para incluir aspas dentro de uma string.
 'string': Delimitador de cadeia de caracteres literal.
 ;: Separador de seção (permite definir formatos para positivos, negativos e zero).
 :: O separador de hora.
 /: O separador de data. 
*/