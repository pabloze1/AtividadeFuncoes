#include<stdio.h>

int funcaoPar(int a, int b, int c){

    int qtdPares = 0;
    if(a % 2 == 0){
        qtdPares++;
    }
    if(b % 2 == 0){
        qtdPares++;
    }
    if(c % 2 == 0){
        qtdPares++;
    }
    return qtdPares;
}


int main(){

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%\d", funcaoPar(a, b, c));

    return 0;
}
