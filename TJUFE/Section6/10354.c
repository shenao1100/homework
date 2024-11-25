#include <stdio.h>

double abs_val(double num){
    if (num < 0){
        return num * -1.0;
    } else {
        return num;
    }
}

long factorial(int num){
    long result = 1;
    for (int i=1; i<=num; i++){
        result *= i;
    }
    return result;
}

/*long power(int num, int n){
    // 这题的意思好像是不让用, 而不是自己实现一个
    long result = num;
    if (n == 0) return 1;
    for (int i=2; i<=n; i++){
        result *= num;
    }
    return result;
}

double fn(double pervious, int num, double eps, int n){
    // n start with 1
    double result;
    if (n%2 == 0) {
        //minus
        result = pervious - ((double)power(num, n) / (double)factorial(n));
    } else {
        // plus
        result = pervious + ((double)power(num, n) / (double)factorial(n));
    }
    if (abs_val(result - pervious) < eps && abs_val(result - pervious) != 0){
        return result;
    } else {
        return fn(result, num, eps, ++n);
    }
}*/

double fn(float num, double eps){
    int n = 1;
    double pervious_result = 1;
    // int factorial_num = 1;
    // float num_power = num;
    double sum = 1.0;
    
    while (abs_val(pervious_result) > eps){
        // if absolute of result < eps, then the percision was enough
        pervious_result = (pervious_result * num) / n;
        if (n % 2 == 0){
            // minus
            sum -= pervious_result;
        } else {
            sum += pervious_result;
        }
        n++;
    }
    return sum;
}

int main(){
    printf("Input x:");
    float num;
    scanf("%f", &num);
    double result = fn(num, 1e-8);
    printf("1+x-x^2/2!+..+(-1)^(n+1)*x^n/n!=%.6f", result);
    return 0;
}