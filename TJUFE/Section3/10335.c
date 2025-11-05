#include <stdio.h>

int main(void) {
    int input;
    printf("Input an integer: ");
    scanf("%d", &input);
    int hundreds = input / 100, tens = (input % 100) / 10, units = input % 10;
    
    printf("%d", units * 100 + tens * 10 + hundreds);
    return 0;
}