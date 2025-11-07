//Crie um programa que solicite o peso (em kg) e a altura (em metros) de uma pessoa. Calcule o IMC usando a fórmula: IMC=peso/(altura∗altura). Com base no resultado, exiba a categoria correspondente:
#include <stdio.h>
#include <stdbool.h>

float receberPesoAltura() {
    float a;
    scanf(" %f", &a);
    fflush(stdin);
    return a;
}

int main() {
    float a;
    float b;
    float imc;
    printf("Digite seu peso em kg :");
    a = receberPesoAltura();
    printf("Digite sua altura em metros :");
    b = receberPesoAltura();
    
    imc=a/(b*b);
    printf("sei imc e igual a : %.2f \n", imc);

    if(imc < 18.5){
        printf("Abaixo do peso");
    }else if (imc >= 18.5 && imc <= 24.9){
        printf("Peso normal");
    }else if (imc >= 25.0 && imc <= 29.9){
        printf("Sobrepeso");
    }else {
        printf("Obesidade");
    }
    return 0;
}