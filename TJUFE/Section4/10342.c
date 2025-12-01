#include <stdio.h>

int main(void) {
    int input;
    printf("Input n:");
    scanf("%d", &input);
    float result = 1.0f;

    for (int i = 2; i <= input; i++) {
        if (i % 2 == 0) {
            result -= 1 / (float)i;

        }else {
            result += 1 / (float)i;

        }
    }

    printf("1-1/2+1/3-1/4+...=%f", result);
    return 0;
}