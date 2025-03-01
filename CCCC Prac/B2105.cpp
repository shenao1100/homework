#include <iostream>
#include <iomanip>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <unordered_set>

int main() {
    // matrix size
    int n, m, k, tmp;

    std::cin >> n >> m >> k;
    int max_a[n][m];
    int max_b[m][k];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cin >> tmp;
            max_a[i][j] = tmp;
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < k; j++) {
            std::cin >> tmp;
            max_b[i][j] = tmp;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            tmp = 0;
            for (int var = 0; var < m; var++) {
                tmp += max_a[i][var] * max_b[var][j];
            }
            if (j != k - 1) {
                std::cout << tmp << " ";
            } else {
                std::cout << tmp << "\n";
            }
        }
    }
    return 0;
}