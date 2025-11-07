//Crie uma calculadora que realiza as quatro operações básicas: soma, subtração, multiplicação e divisão. O programa deve:
#include <stdio.h>
#include <stdbool.h>

float receberNumeros() {
    float a;
    scanf(" %f", &a);
    fflush(stdin);
    return a;
}
float operacAdicao(float a, float b){
    float adicao;
    adicao = a+b;
    return adicao;
}
float operacSubtracao(float a, float b){
    float subtracao;
    subtracao = a-b;
    return subtracao;
}
float operacMultiplicacao(float a, float b){
    float mult;
    mult = a*b;
    return mult;
}
float operacDivisao(float a, float b){
    float div;
    if(b==0){
        div = 0;
    }else{
        div = a/b;
    }
    return div;

}

int main() {
    float a;
    float b;
    char operac;
    printf("Insira dois numeros : \n");
    a = receberNumeros();
    b = receberNumeros();
    printf("Digite a primeira letra da operação desejada: adicao(a)/ subtracao(s) / multiplicacao(m) / divisao(d)");
    scanf(" %c", &operac);
    fflush(stdin);
    if(operac == 'a'){
        printf("A soma dos numeros e : %.2f", operacAdicao(a, b));
    }else if (operac == 's'){
        printf("A subtracao dos numeros e : %.2f", operacSubtracao(a, b));
    }else if (operac == 'm'){
        printf("A multiplicacao dos numeros e : %.2f", operacMultiplicacao(a, b));
    }else if (operac == 'd'){
        printf("A divisao dos numeros e : %.2f", operacDivisao(a, b));
    }
    return 0;
}