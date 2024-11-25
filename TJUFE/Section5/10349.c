#include <stdio.h>
int main(){
    int length;
    int mark_len = 1;
    printf("Input longest line:\n");
    scanf("%d", &length);
    for (int line_length = 1; length > line_length; line_length++){
        for (int i = 0; i < length - line_length; i++){
            printf(" ");
        };
        for (int i = 0; i < mark_len; i++){
            printf("%%");
        };
        printf("\n");
        mark_len += 2;
    };
    for (int i = 0; i < mark_len; i++){
        printf("%%");
    };
    printf("\n");
    for (int line_length = length; line_length > 1; line_length--){
        mark_len -= 2;
        for (int i = 0; i <= length - line_length; i++){
            printf(" ");
        };
        for (int i = 0; i < mark_len; i++){
            printf("%%");
        };
        printf("\n");
        
    };
    return 0;
    
}