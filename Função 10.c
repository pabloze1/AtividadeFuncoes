#include<stdio.h>

int funcaoCalculaPar(int a, int b){
    int soma = 0;
    int i;
    for (i = a; i <= b; i++){
        if (i % 2 == 0){
            soma += i;
        }
    }
    return soma;
}


int main(){

    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", funcaoCalculaPar(a, b));
    return 0;
}

