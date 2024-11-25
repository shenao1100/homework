#include <stdio.h>

int main(){
    printf("Input x:");
    float x;
    float result;
    scanf("%f", &x);
    if (x < -10){
        result = 7*x - 20;
    }else if (x < 5){
        result = 3*(x*x)+4*x-6;
    }else if (x < 200){
        result = 2*(x*x*x) - 28;
    }else{
        result = 10*x-2;
    }
    printf("y=%.2f", result);
    return 0;
}