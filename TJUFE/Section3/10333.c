#include <stdio.h>
int main(){
    printf("Input Fahrenheit:");
    float f;
    scanf("%f", &f);
    printf("c=%.6f", (f-32)/1.8);
    return 0;
}