#include <stdio.h>
#include <math.h>

#define R 2

int main(){
    printf("Input (x,y):");
    int x, y;
    scanf("%d %d", &x, &y);
    if (sqrt(x*x + y*y) > R){
        printf("height=0");
    } else {
        printf("height=10");
    }
    return 0;
}