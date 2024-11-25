#include <stdio.h>

int main() {
    short num;
    printf("Input a short integer:");
    scanf("%hd", &num);
    int long_num = (int)num;
    printf("%%d:%d,%%o:%o,%%x:%x\n", num, num, num);
    printf("%%hd:%hd,%%ho:%ho,%%hx:%hx", long_num, long_num, long_num);
    return 0;
}