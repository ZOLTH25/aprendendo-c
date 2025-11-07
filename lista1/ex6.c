//Escreva um programa que peça ao usuário para inserir os comprimentos dos três lados de um triângulo. O programa deve então classificar e exibir o tipo de triângulo:
#include <stdio.h>
#include <stdbool.h>

int comprimentosTriangulo() {
    int n;
    printf("Digite o comprimento do triangulo: ");
    scanf("%d", &n);
    fflush(stdin);
    return n;
}

int main() {
    int a;
    int b;
    int c;
    a = comprimentosTriangulo();
    b = comprimentosTriangulo();
    c = comprimentosTriangulo();
    printf("Vericando se o triangulo é valido: \n");
    if(a + b > c){
        printf("o triangulo e valido\n");
        printf("Verificando o tipo de Triangulo: \n");
        if(a == b && b == c){
            printf("O triangulo e Equilatero");
        }else if (a==b || b==c || a==c ){
            printf("O triangulo e Isoscelis");
        }else {
            printf("O triangulo e Escaleno");
        }
    }else{
        printf("triangulo invalido\n");
    }
    return 0;
}