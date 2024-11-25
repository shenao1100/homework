//97-122
#include <stdio.h>

int main(){
    printf("Input a string:\n");
    char string[100];
    int count[26];
    scanf("%[^\n]", &string);
    for (int i=0; i<26; i++){
        count[i] = 0;
    }
    for (int i=0; i<100; i++){
        if ((int)string[i] == 0) {break;}
        if ((int)string[i] >= 97 && (int)string[i] <= 122){
            count[(int)string[i] - 97]++;
        }
    }
    for (int i=0; i<26; i++){
        if (count[i] > 0){
            printf("number of \'%c\' is:%d\n", (char)(i + 97), count[i]);
        }
    }
    return 0;
}