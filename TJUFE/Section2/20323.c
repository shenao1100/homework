#include <stdio.h>

int main(){
    char int_char;
    printf("Input a charactor:");
    scanf("%c", &int_char);
    printf("%c----%d(ASCII)", int_char, (int)int_char);
    return 0;
}