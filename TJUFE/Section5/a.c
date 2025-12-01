#include <stdio.h>
#include <math.h>

double f(double x) {
    return cos(x) - x;
}

double f_derivative(double x) {
    return -sin(x) - 1;
}

int main() {
    double x, x_new, eps;
    
    printf("Input eps:");
    scanf("%lf", &eps);
    
    x = 3.14159 / 4.0;
    int iteration = 0;
    do {
        x_new = x - f(x) / f_derivative(x);
        
        x = x_new;
        
        iteration++;
        
    } while (fabs(f(x)) > eps);
    
    printf("cos(x)-x=0,x=%.8lf\n", x);

    
    return 0;
}