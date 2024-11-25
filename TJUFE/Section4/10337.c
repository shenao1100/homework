#include <stdio.h>
int main(){
    printf("Input expression:");
    float a, b;
    char func;
    scanf("%f%c%f", &a, &func, &b);
    switch (func){
        case '+':
            printf("%.6f+%.6f=%.6f", a, b, a+b);
            break;
        case '-':
            printf("%.6f-%.6f=%.6f", a, b, a-b);
            break;
        case '/':
            if (b == 0){
                printf("Can not divid 0!\nExpression error!");
                break;
            }
            printf("%.6f/%.6f=%.6f", a, b, a/b);
            break;
        case '*':
            printf("%.6f*%.6f=%.6f", a, b, a*b);
            break;
        default:
            printf("Expression error!");
    }
    return 0;
}