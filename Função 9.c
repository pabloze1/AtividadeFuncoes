#include<stdio.h>

double funcaoDelta(double a, double b, double c){

    return (b * b) - (4 * a * c);
}

void funcaoRaizes(double a, double b, double c) {

    double delta = funcaoDelta(a, b, c);

    if(delta < 0) {
        printf("Nao existem raizes\n");
    }else if(a == 0) {
        double x = (-c) / b;
        printf("x = %.1lf\n", x);
    }else if(delta == 0) {
        double x = (-b) / (2 * a);
        printf("x = %.1lf\n", x);
    }else{
        double x1 = (-b + sqrt(delta)) / (2 * a);
        double x2 = (-b - sqrt(delta)) / (2 * a);
        printf("x1 = %.1lf x2 = %.1lf\n", x1, x2);
    }
}

int main(){

    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    funcaoRaizes(a, b, c);

}
