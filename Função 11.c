#include<stdio.h>

void funcaoDivisor(int n){
    int i;
    for(i = 1; i <= n; i++){
        if (n % i == 0){
            printf("%d\n", i);
        }
    }
}

int main(){

    int n;
    scanf("%d", &n);
    funcaoDivisor(n);

    return 0;
}
