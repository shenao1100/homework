#include <iostream>
#include <iomanip>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <unordered_set>

int main() {
    std::vector<int> v;
    int count, tmp;

    std::cin >> count;
    for (int i = 0; i < count; i++) {
        std::cin >> tmp;
        v.insert(v.begin(), tmp);
    }
    for (int i = 0; i < v.size(); i++) {
        std::cout << v[i] << " ";
    }
    return 0;
}