#include <iostream>
#include <iomanip>


int main() {
    std::string input;
    int W11[100000] = {0}, L11[100000] = {0}, W21[100000] = {0}, L21[100000] = {0};
    int index11 = 0, index21 = 0;
    bool eol = false;
    while (std::getline(std::cin, input)) {
        for (int i = 0; i < input.length(); i++) {
            switch (input[i]) {
                case 'W':
                    W11[index11]++;
                    W21[index21]++;
                break;
                case 'L':
                    L11[index11]++;
                    L21[index21]++;
                break;
                case 'E':
                    eol = true;
                break;
            }
            if (eol) { break; }
            if (W11[index11] >= 11 || L11[index11] >= 11) {
                if (abs(W11[index11] - L11[index11]) >= 2) {
                    index11++;
                }
            }
            if (W21[index21] >= 21 || L21[index21] >= 21) {
                if (abs(W21[index21] - L21[index21])  >= 2) {
                    index21++;
                }
            }

        }
        if (eol) { break; }
    }
    for (int i = 0; i <= index11; i++) {
        std::cout << W11[i] << ":" << L11[i] << std::endl;
    }
    std::cout << std::endl;
    for (int i = 0; i <= index21; i++) {
        std::cout << W21[i] << ":" << L21[i] << std::endl;
    }
    return 0;
}
