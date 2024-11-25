#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int size = ((a + b) * c) / 2;
    printf("Input a b h of the Trapezium:s=%d", size);
    return 0;
}