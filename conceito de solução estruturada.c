/* 
Conceitos de solução estruturada
Confira no vídeo dois conceitos de solução estruturada: modularidade e abstração. 
Esses conceitos permitem o desenvolvimento de programas mais organizados e eficientes.



Continuamos a utilizar a solução estruturada, essencial para escrever programas claros e organizados. 
Baseada nos conceitos de modularidade, abstração e um fluxo lógico consistente, a solução estruturada nos 
ajuda a resolver problemas complexos de maneira eficiente e organizada. Vamos nos aprofundar nesses 
conceitos para aprimorar nossa capacidade de solucionar problemas de forma eficaz.


Modularidade

Dividir um problema grande em subproblemas menores é uma técnica fundamental para a solução estruturada. 
Isso não só torna o problema mais manejável, mas também facilita a identificação e a correção de erros.

 

Imagine que você esteja desenvolvendo um sistema para calcular a média de temperaturas de uma semana. 
O problema pode ser dividido nas seguintes etapas. Observe!


Entrada de dados

Coletar as temperaturas diárias.


Saída de dados

Exibir a média das temperaturas.


Processamento de dados

Calcular a média das temperaturas.


A modularidade está diretamente ligada ao conceito de dividir um problema grande e complexo em problemas 
menores e mais manejáveis. Ela envolve escrever funções ou módulos que realizam tarefas específicas, 
tornando o código mais reutilizável e fácil de entender. Cada módulo deve ter uma única responsabilidade. 
Embora o conceito de função não seja o foco deste desafio, utilizaremos funções genéricas para ilustrar a 
modularidade.

 

Vamos usar o exemplo de cálculo da média de temperaturas para ilustrar a modularidade.


C (GCC 9.2.0)
*/

#include <stdio.h>
 
// Função genérica para entrada de dados
void entradaDados() {
    // código para a função entradaDados
}
 
// Função genérica para cálculo da média
float calcularMedia() {
    // código para a função calcularMedia
}
 
// Função genérica para exibir dados
void exibirMedia() {
    // código para a função exibirMedia
}
 
int main() {
 
    int media;
    entradaDados();
    media = calcularMedia();
    exibirMedia();
 
    return 0;
}

/*
Nesse exemplo, temos três funções distintas para entrada, processamento e saída de dados, cada uma com 
uma responsabilidade clara. Lembre-se de que o conceito de função será abordado em detalhes em um nível 
posterior, mas é utilizado aqui para ilustrar a modularidade.


Comentário
Com a modularidade, é fácil alterar as funções de entrada, processamento e saída de dados sem afetar o 
restante do código. Por exemplo, se você quiser alterar a maneira como os dados são coletados
 (entrada de dados) ou como os resultados são exibidos (saída de dados), você só precisa modificar as 
 funções correspondentes. Além disso, as funções de entrada e saída podem ser reutilizadas em outros 
 programas ou contextos, aumentando a eficiência do desenvolvimento.


Abstração

Permite focar os aspectos mais importantes de um problema, ignorando os detalhes irrelevantes. 
Isso é importante para lidar com a complexidade.

 

Usando o exemplo do cálculo da média das temperaturas, em vez de se preocupar com os detalhes de como a 
entrada de dados é feita, você pode criar uma função entradaDados que abstrai esse processo. 
Assim, se precisar modificar a maneira como os dados são coletados, basta alterar essa função, mantendo o 
restante do código inalterado.
*/