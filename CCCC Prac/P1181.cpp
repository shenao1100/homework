#include <iostream>
#include <iomanip>
#include <vector>
#include <cstdio>
#include <algorithm>

bool compare(int a, int b) {
    return a < b;
}
int main() {
    long max = 0, count = 0, temp, tmp2, result = 0;
    std::vector<long> v;
    std::cin >> count >> max;
    for (int i = 0; i < count; i++) {
        std::cin >> temp;
        v.push_back(temp);
    }
    temp = 0;
    for (int i = 0; i < v.size(); i++) {
        if (temp + v[i] > max) {
            temp = v[i];
            result++;
        }else {
            temp += v[i];
        }

    }
    result++;
    std::cout << result << std::endl;

    return 0;
}