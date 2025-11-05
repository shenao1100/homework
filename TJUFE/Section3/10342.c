#include <stdio.h>

int main(void) {

    unsigned short input;
    printf("Input a unsigned short int:");
    scanf("%hu",&input);
    unsigned char high = (input & 0xFF00) >> 8, low = (input & 0x00FF);
    printf("%x--->%x,%x", input, high, low);
    return 0;
}