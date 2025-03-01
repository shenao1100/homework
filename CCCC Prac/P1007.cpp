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
    int length, count, tmp, hf_len;

    std::cin >> length >> count;
    int bridge[length] = {0};
    for (int i = 0; i < count; i++) {
        std::cin >> tmp;
        bridge[tmp] = 1;
    }
    int furthest = 0, longest = 0;

    // min time
    hf_len = length / 2;

    if (length % 2 != 0 && bridge[(length / 2) + 1] == 1) {
        furthest = (length / 2) + 1;
    }
    for (int i = 0; i < hf_len; i++) {
        if (bridge[i] == 1 && i > furthest) {
            furthest = i;
        }
    }
    for (int i = length; i >= hf_len; i--) {
        if (bridge[i] == 1 && length - i  + 1 > furthest) {
            furthest = length - i + 1;
        }
    }
    // longest
    for (int i = 0; i < length; i++) {
        if (bridge[i] == 1) {
            longest = length - i + 1;
            break;
        }
    }
    for (int i = length; i >= 0; i--) {
        if (bridge[i] == 1 && i > longest) {
            longest = i;
            break;
        }
    }
    std::cout << furthest << " " << longest << std::endl;
    return 0;
}