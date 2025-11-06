//Escreva um programa que receba dois números inteiros do usuário e, em seguida, determine e imprima qual dos dois é o maior.
#include <stdio.h>
#include <stdbool.h>

int chamarNumero() {
    int n;
    printf("Digite o numero: ");
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