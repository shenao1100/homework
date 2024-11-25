#include <stdio.h>
#include <ctype.h>

int main(){
    char string[1024];
    int char_count=0, digit_count=0, blank_count=0, other_count=0;
    printf("Input a string:");
    fgets(string, sizeof(string), stdin);
    for (char *i=string; *i!='\0'; i++) {
        // i start with first address of string
        if (isalpha(*i)){
            char_count++;
        } else if (isdigit(*i)){
            digit_count++;
        } else if (isspace(*i)){
            blank_count++;
        } else{
            other_count++;
        }
    }
    printf("char:%d,digit:%d,blank:%d,other:%d", 
        char_count, digit_count, blank_count, other_count);
    return 0;
}