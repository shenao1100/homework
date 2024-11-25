#include <stdio.h>

int IsPrime(int num){
    for (int i=2; i<num/2; i++){
        if (num % i == 0 && i != num){
            return 0;
        }
    }
    return 1;
}

int main(){
    printf("Input an integer(>0):");
    int num;
    scanf("%d", &num);
    if (IsPrime(num)){
        printf("%d is a prime.", num);
    } else {
        printf("%d is not a prime.", num);
    }
    return 0;
}