#include <stdio.h>
int main(){
    // 我们学校作业有这题
    // 为什么这里出的题就非要加空格
    // 而且就不能用浮点吗
    long a, b, count;
    char func;
    scanf("%ld", &count);
    for (int i = 0; i < count; i++) {
        scanf("%ld %c %ld", &a, &func, &b);
        switch (func){
            case '+':
                printf("%ld\n", a+b);
            break;
            case '-':
                printf("%ld\n", a-b);
            break;
            case '/':
                printf("%ld %ld\n", a/b, a%b);
            break;
            case '*':
                printf("%ld\n", a*b);
            break;
        }
    }

    return 0;
}