#include <stdio.h>
#include <math.h>
#define PI 3.14
#define ROU 7.8

int main(){
    printf("Input radius:");
    float r;
    scanf("%f", &r);
    float s = 4 * PI * (r*r);
    float v = (4 * PI * (r*r*r)) / 3;
    float mass = v * ROU;
    printf("s=%.2f,v=%.2f,q=%.2f", s, v, mass);
    return 0;
}