#include <stdio.h>

int m(){
    for (int i=0; i<40; i++){
        printf("#");
    }
    return 0;
}
int main()
{
    char recipient[20], sender[20];
    printf("Input the recipient:");
    scanf("%s", &recipient);
    printf("Input the sender:");
    scanf("%s", &sender);
    printf("\n");
    m();
    printf("\nDear %s\n\n    Happy birthday to you!\n\nsincerely yours %s\n", recipient, sender);
    m();
    return 0;
}