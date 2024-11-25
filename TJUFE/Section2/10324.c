#include <stdio.h>

int main(){
    int int_char;
    printf("Input an integer:");
    scanf("%d", &int_char);
    printf("%d--->%c", int_char, (char)int_char);
    return 0;
}