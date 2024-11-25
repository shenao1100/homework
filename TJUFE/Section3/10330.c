#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c;
    printf("ax^2+bx+c=0, please input a b c:");
    scanf("%f %f %f", &a, &b, &c);
    float sqrt_root = sqrt((b*b)-(4*a*c));
    float x1 = ((b*-1) + sqrt_root) / (2*a);
    float x2 = ((b*-1) - sqrt_root) / (2*a);
    printf("x1=%.6f,x2=%.6f", x1, x2);
    return 0;
}