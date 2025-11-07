//Faça um programa que receba três notas de um aluno. Calcule a média aritmética simples e, com base na média, exiba a situação do aluno:
#include <stdio.h>
#include <stdbool.h>

float chamarNota() {
    float n;
    printf("Digite sua nota: ");
    scanf("%f", &n);
    fflush(stdin);
    return n;
}

int main() {
    float a;
    float b;
    float c;
    float media;
    a = chamarNota();
    b = chamarNota();
    c = chamarNota();
    media = (a+b+c)/3;
    printf("Sua media e: %.2f", media);

    if(media >= 7.0){
        printf("Aprovado");
    }else if (media>4 && media<6.9){
        printf("Recuperação");
    }else {
        printf("Reprovado");
    }
    return 0;
}