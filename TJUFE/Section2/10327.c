#include <stdio.h>

int main(){
    // why not using array :(
    int a, b, c, d;
    printf("Enter integer a:\n");
    scanf("%d", &a);
    printf("Enter integer b:\n");
    scanf("%d", &b);
    printf("Enter integer c:\n");
    scanf("%d", &c);
    printf("Enter integer d:\n");
    scanf("%d", &d);
    printf("(%d+%d-%d)*%d=%d", a, b, c, d, (a+b-c)*d);
    return 0;
}