#include<stdio.h>

void imprime(int n){

    int i;
    for(i = 1; i <= n; i++){
        printf("%d ", i);
    }
}

int main(){

    int n;
    scanf("%d", &n);
    imprime(n);

    return 0;
}
