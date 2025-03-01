#include <iostream>
#include <iomanip>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <unordered_set>
bool check(int num) {
    for (int i = 2; i < num; i++) {
        if (num % i == 0) { return false;}
    }
    return true;
}
int main() {
    int count = 0, sum = 0, tmp = 0;
    std::cin >> count;
    for (int i = 2; i < count; i++) {
        if (count % i != 0) {continue;}
        if (check(i)) {
            if (i > count / i && i > tmp) {
                tmp = i;
            }else if (i < count / i && count / i > tmp) {
                tmp = count / i;
            }
        }

    }
    std::cout << tmp << std::endl;
    //printf("%.2lf", sum / (double)count);
    return 0;
}