//Simule um caixa eletrônico. Peça ao usuário para inserir um valor de saque (inteiro). O programa deve informar quantas notas de 
// R100,R50, R20,R10, R5,R2 e R$1 são necessárias para compor o valor do saque, priorizando sempre as notas de maior valor.

#include <stdio.h>
#include <stdbool.h>

int charmarNumero() {
    int n;
    printf("Insira o valor do saque: ");
    scanf("%d", &n);
    return n;
}

int main() {
    int n1;
    int div100 ;
    int resto100;
    int div50 ;
    int resto50;  
    int div20 ;
    int resto20; 
    int div10 ;
    int resto10; 
    int div5 ;
    int resto5; 
    int div2 ;
    int resto2; 
    int div1 ;
    int resto1; 
    n1 = charmarNumero();
    div100= n1/100;
    resto100= n1 % 100;
    printf("As nota de 100 usadas sao : %d \n", div100);

    div50= resto100/50;
    resto50= resto100 % 50;
    printf("As nota de 50 usadas sao : %d \n", div50);

    div20= resto50/20;
    resto20= resto50 % 20;
    printf("As nota de 20 usadas sao : %d \n", div20);

    div10= resto20/10;
    resto10= resto20 % 10;
    printf("As nota de 10 usadas sao : %d \n", div10);

    div5= resto10/5;
    resto5= resto10 % 5;
    printf("As nota de 5 usadas sao : %d \n", div5);

    div2= resto5/2;
    resto5= resto5 % 2;
    printf("As nota de 2 usadas sao : %d \n", div2);

    div1= resto5/1;
    resto2= resto5 % 1;
    printf("As nota de 1 usadas sao : %d \n", div1);

    return 0;
}