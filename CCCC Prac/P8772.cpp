#include <iostream>
#include <iomanip>
#include <vector>
#include <cstdio>

int main() {
    long sum = 0, count = 0, temp, result = 0;
    std::vector<long> v;
    std::cin >> count;
    for (int i = 0; i < count; i++) {
        std::cin >> temp;
        v.push_back(temp);
        sum += temp;
    }
    for (int i = 0; i < count; i++) {
        result += v[i] * (sum - v[i]);
    }
    std::cout << result / 2 << std::endl;

    return 0;
}
