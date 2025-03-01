#include <iostream>
#include <iomanip>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <unordered_set>

int main() {
    long total = 0, hand = 0, max_cart = 0, cart = 0;
    long result = 0, current_cart_space = 0;
    std::cin >> total >> hand >> max_cart >> cart;
    if (total % 2 != 0){ std::cout << -1 << std::endl; return 0; }
    for (long i = 0; i < total / 2; i++) {
        long left = total / 2 - i;
        long can_be_trans;
        if (max_cart >= left) {
            can_be_trans = left;
        }else {
            can_be_trans = max_cart;
        }
        if (result + can_be_trans * hand > result + cart) {
            // add to cart
            //std::cout << "cart" << std::endl;
            //current_cart_space++;
            i += can_be_trans - 1;
            result += cart;
        }else {
            // ny hand
            //std::cout << "hand" << std::endl;

            result += hand;
        }

    }
    //if (current_cart_space != 0){ result += cart; }
    std::cout << result * 2 << std::endl;
    return 0;
}