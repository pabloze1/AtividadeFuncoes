#include<stdio.h>

double funcaoJuros(double c, double m, double t){

    double juros = c * m * (t / 100);
    return juros;
}

int main(){

    double c, m, t;
    scanf("%lf %lf %lf", &c, &m, &t);
    printf("%.1lf", funcaoJuros(c, m, t));

    return 0;
}
