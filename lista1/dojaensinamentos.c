#include <stdio.h>
#include <stdbool.h>

void primeiroCondicional(int condicional){
    if(condicional == 0){
        printf("é verdade");
    }else{
        printf("é mentira");
    }
}
void segundoCondicional(int condicional){
    while(condicional == 0){
        printf("esta acontecendo algo aqui!\n");
    }
    printf("SAIU DA CONDICAO\n");
}

void repete10vezes(){
    int aux = 0;
    while(aux < 10){
        printf("esta acontecendo algo aqui!\n");
        aux = aux + 1;
    }
    printf("SAIU DA CONDICAO\n");
}

char retornaInput(){
    char c;
    printf("digite uma letra:");
    scanf(" %c", &c);
    return c;
}

void terminalMuitoLegal(){
    char caso; 
    while(caso != 'm'){
        caso = retornaInput();
        switch (caso) {
            case 'a':
                printf("vc deseja printar a");
                break;
            case 'b':
                printf("vc deseja printar b");
                break;
            case 'm':
                printf("saindo do programa tchauuuuu");
                break;
                default:
                printf("nao vai acontecer nada");
                break;
        }
        printf("\n");
    }
}


int main(){
    // primeiroCondicional(condicional);
    // segundoCondicional(condicional);
    // repete10vezes();
    terminalMuitoLegal();
}