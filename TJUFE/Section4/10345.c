#include <stdio.h>

int main(){
    printf("Game Begin!\n");
    const int pwd = 100;
    int inp;
    for (int i=0; i<3; i++){
        printf("Input your guess:");
        scanf("%d", &inp);
        if (inp == pwd){
            printf(" Correct!Count=%d", i+1);
            return 0;
        }else{
            if (inp > pwd){
                printf(" Too big!\n");
            }else{
                printf(" Too small!\n");
            }
        }
    }
    printf("You have no chance!");
    return 0;
}