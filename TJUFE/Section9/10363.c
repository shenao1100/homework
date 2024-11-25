#include <stdio.h>
#include <string.h>

void swap_fn(char *a, char*b){
    char tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(){
    char string[128];
    int m;
    printf("Please input the string:");
    //fgets(string, sizeof(string), stdin);   // string[-1] = '\n'
    scanf("%[^\n]", &string);
    printf("Please input the number of swap-char:");
    scanf("%d", &m);
    int len = strlen(string);
    for (int i=0; i<m; i++){
        // strlen - 1 to forget \0
        // i : strlen-1-m+i
        swap_fn(&string[i], &string[len-1-m+i]);
    }
    printf("The new string is ");
    printf(string);
    return 0;
}