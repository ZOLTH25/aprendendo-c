//Desenvolva um programa que pergunte o ano de nascimento de uma pessoa. Com base no ano atual (pode ser um valor fixo no código, como 2024), o programa deve calcular a idade da pessoa e informar se ela já tem idade para votar (16 anos ou mais).
#include <stdio.h>
#include <stdbool.h>

int anoDeNascimento() {
    int a;
    printf("Digite o ano em que voce nasceu: ");
    scanf("%d", &a);
    return a;
}
int anoAtual(){
    int a;
    printf("Digite o ano atual: ");
    scanf("%d", &a);
    return a;
}
 int verificaSuaIdade(int a, int b) {
    int idade;
    idade = b-a;
    return idade;

}

int main() {
    int a;
    int b;
    a = anoDeNascimento();
    b = anoAtual();
    printf("sua idade e :  %d ", verificaSuaIdade(a, b));
    
    if(verificaSuaIdade(a, b)>= 16){
        prinft("voce pode votar.");
    }else{
        printf("voce nao pode votar.");
    }
    return 0;

}