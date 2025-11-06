//Desenvolva um programa que pergunte o ano de nascimento de uma pessoa. Com base no ano atual (pode ser um valor fixo no código, como 2024), o programa deve calcular a idade da pessoa e informar se ela já tem idade para votar (16 anos ou mais).
#include <stdio.h>
#include <stdbool.h>

int anoDeNascimento() {
    int ano;
    printf("Digite o ano em que voce nasceu: ");
    scanf("%d", &n);
    return n;
}
 void verificaQualNumeroMaior(int n1, int n2) {
    if(n1>n2){
        printf("O numero %d e maior", n1);
    } else if (n1==n2){
        printf("Os numeros possuem o mesmo valor");
    } else {
        printf("O numero %d e maior", n2);
    }
}

int main() {
    int a;
    int b;
    a = chamarNumero();
    b = chamarNumero();
    verificaQualNumeroMaior(a, b);  
    return 0;
}