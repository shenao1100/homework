#include <stdio.h>
int main(){
    char string[128];
    printf("Please input the string:");
    fgets(string, sizeof(string), stdin);
    char del_char;
    printf("Input the deleted charactor:");
    scanf("%c", &del_char);
    int offset = 0, len = sizeof(string)-1;
    char *add;
    for (char *i=string; *i!='\0'; i++){
        
        if (*i == del_char){
            offset++;
            continue;
        }

        *(i - offset) = *i;
        add = i;
    }
    *(add - offset + 1) = '\0';
    printf("The new string:%s", string);
    return 0;
}