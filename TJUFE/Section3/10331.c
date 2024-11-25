#include <stdio.h>
int main(){
    printf("Input a short int:");
    char int_char[10];
    scanf("%s", &int_char);
    short integer = (short)strtol(int_char, NULL, 16);
    short result = (integer & 0xFF00) | (~integer & 0x00FF);
    printf("%s--->%x", int_char, result);
    return 0;
}