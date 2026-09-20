#include <stdio.h> // conecta o código a uma biblioteca a uma biblioteca de funções básicas de entrada e saída, std = Standard data (Dados padrão) IO = imput e Output (Entrada e saída), h = header (cabeçalho)

int main (){ // função main contém o que precisamos para esta estrutura, () declara que main é uma função do tipo int
    float frequencia, nota; // float = flutuantes, com números após a vírgula (lado direito da vírgula)
    
    printf("Por favor, insira a nota do aluno de 1 a 10: "); // printf = exiba a mensagem para o usuário, ; = sempre indica que o comando da linha chegou ao fim
    scanf("%f", &nota); // scanf = leia do usuário o que foi digitado, %f = aceita número do tipo float, & = declara que a informação fica salva na varável nota
    
    printf("Por favor, insira a frequencia do aluno de 0 a 100: "); 
    scanf("%f", &frequencia);
    
    if (nota >= 6 && frequencia >= 75) { // if = Se nota do aluno for maior ou igual a 6 e frequência maior ou igual a 75, detalhe aqui não tem ;, porque isso é a condição, o ; vem na próxima linha indicando que esta linha ou pequena parte do comando chegou ao fim
        printf("Aprovado\n"); // exibe para o usuário se o aluno foi aprovado
    } 
    else if (nota >= 4 ) { // else if = então se nota do aluno for maior ou igual a 4
        printf("Recuperacao\n"); //exibe mensagem: Recuperação
    } 
    else {  // else = senão
        printf("Reprovado\n"); //exibe a mensagem reprovado 
    }
    
    return 0; //fim das atividades
}