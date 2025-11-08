//Peça ao usuário para digitar um dia, um mês e um ano. Crie uma função que receba esses três valores e retorne se a data é válida ou não. Considere anos bissextos (um ano é bissexto se for divisível por 4, exceto para anos terminados em 00 que não são divisíveis por 400).


//coleta input do usuario e retorna inteiro
//entrada: não temos
//saida: numero inteiro
int pedirInfo(){
  int a;
  scanf("%d", a);
  return a;
    
}

//analisa a data e retorna se é verdadeiro ou falso
//entrada: 
//saida:1 ou 0
int analisaData(){
    int dia;
    int mes;
    int ano;
    printf("Digite um dia: ");
    dia = pedirInfo();
    if(dia>31){
        return 0;
    }else if(dia <= 0){
        return 0;
    }
    printf("Digite um mes: ");
    mes = pedirInfo();
    if(mes>12){
        return 0;
    }else if(mes <= 0){
        return 0;
    }
    printf("Digite um ano: ");
    ano = pedirInfo();
    if(ano>2025){
        return 0;
    }else if(ano <= 0){
        return 0;
    }
}
//analisa se ano é bissexto e retornando verdadeiro ou falso
//entrada: ano
//retorno:1 ou 0
int bissextoAnalise(int ano){
    int resto;
    int resto100;
    resto = ano % 4;
    resto100 = ano % 100;
    if(resto == 0 && resto100 != 0){
        return 1;
    }else{
        return 0;
    }
    
}

in
int main(){


    

}
