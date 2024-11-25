#include <stdio.h>
#include <string.h>
int main(){
    printf("Input a number(>=0):");
    int num;
    char num_string[128];
    scanf("%d", &num);
    sprintf(num_string, "%d", num);
    int result = 0;
    for (int i=0; i<strlen(num_string); i++){
        result += (int)num_string[i] - 48;
    }
    printf("the sum is:%d", result);
    return 0;
}