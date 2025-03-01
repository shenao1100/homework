#include <iostream>
#include <iomanip>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <unordered_set>
long gcd(long a, long b) {
    if (b == 0) {
        return a;
    }else {
        return gcd(b, a % b);
    }
}
int main() {
    long up = 0, down = 0, tmp = 0;
    std::cin >> up >> down;
    long max_gcd = gcd(up, down);
    //std::cout << max_gcd << std::endl;
    printf("%.9lf", ((double)up / (double)max_gcd) / ((double)down / (double)max_gcd));
    //printf("%.9lf", ((float)up) / ((float)down));
    return 0;
}