#include<stdio.h>

double funcaoDelta(double a, double b, double c){

    return (b * b) - (4 * a * c);
}

int main(){

    double delta, a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    delta = funcaoDelta(a, b, c);
    printf("%.1lf\n", delta);
    return 0;
}
