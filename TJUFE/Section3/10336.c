#include <stdio.h>

int main(void) {
    int input;
    printf("Input an integer(****): ");
    scanf("%d", &input);
    int thousands = input / 1000,
        hundreds = (input % 1000) / 100,
        tens = (input % 100) / 10,
        units = input % 10;

    thousands = (thousands + 9) % 10;
    tens = (tens + 9) % 10;
    units = (units + 9) % 10;
    hundreds = (hundreds + 9) % 10;

    printf("The encrypted number is %d", tens  * 1000 + units  * 100 + thousands * 10 + hundreds );
    return 0;
}