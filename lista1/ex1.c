//Crie um programa que peça ao usuário para inserir um número inteiro. O programa deve então verificar e informar se o número é par ou ímpar.
#include <stdio.h>
#include <stdbool.h>

int charmarNumero() {
    int n;
    printf("Digite o numero: ");
    scanf("%d", &n);
    return n;
}

int main() {
    int n1;
    int resto;
    n1 = charmarNumero();
    resto = n1 % 2;

    if(resto == 0){
        printf("O numero e %i e par \n", n1);
    }else{
        printf("O numero e %i e impar \n", n1);
    }  
    return 0;
}