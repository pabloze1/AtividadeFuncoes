#include<stdio.h>

int funcaoSomaMaior(int a, int b, int c){

    int maior = a;

    if(b > maior){
        maior = b;
    }
    if(c > maior){
        maior = c;
    }
    int menor = a;

    if(b < menor){
        menor = b;
    }
    if(c < menor){
        menor = c;
    }
    return maior + menor;
}

int main(){

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d\n", funcaoSomaMaior(a, b, c));
    return 0;
}
