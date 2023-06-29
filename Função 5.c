#include<stdio.h>

double funcaoPa(double a1,double aN,double n){

    double pa = (n * (a1 + aN)) / 2;
    return pa;
}

int main(){

    double a1, aN, n;
    scanf("%lf %lf %lf", &a1, &aN, &n);
    printf("%.1lf", funcaoPa(a1, aN, n));
    return 0;
}
