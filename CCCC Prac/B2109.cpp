#include <iostream>
int main(){
    std::string input;
    int count = 0;
    std::getline(std::cin, input);
    for (int i = 0; i < input.length(); i++) {
        if ((char)input[i] <= 57 && (char)input[i] >= 48) {
            count++;
        }
    }
    std::cout << count << std::endl;
    return 0;
}
