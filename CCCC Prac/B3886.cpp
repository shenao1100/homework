#include <iostream>
#include <iomanip>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <map>
#include <semaphore.h>
#include <unordered_set>


int main() {
    int a, b, c, d, m, score = 0;
    std::cin >> a >> b >> c >> d >> m;
    score = c * 5;

    if (score > m) {
        score += d*20;

    }
    score -= (b - d) * 20;

    if (score < 0) {
        score = 0;
    }
    std::cout << score;

    return 0;
}