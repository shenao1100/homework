#include <stdio.h>
#include <math.h>


int main()
{
    char a, b;
    scanf("%c %c",&a, &b);
    //AND
    if (a == 'F' || b == 'F') {
        printf("F ");
    }else if (a == '0' || b == '0') {
        printf("0 ");
    } else {
        printf("T ");
    }
    //OR
    if (a == 'T' || b == 'T') {
        printf("T");
    }else if (a == '0' || b == '0') {
        printf("0");
    }else {
        printf("F");
    }
    
    return 0;
}