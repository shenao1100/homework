#include <iostream>
#include <iomanip>
#include <vector>
#include <cstdio>

std::string toUpper(std::string input) {
    std::string result = "";
    for (int i = 0; i < input.length(); i++) {
        if (input[i] >= 'a' && input[i] <= 'z') {
            result += input[i] - 'a' + 'A';
        }
        else {
            result += input[i];
        }
    }
    return result;

}
char getMostPopularChar(std::string input) {
    int chars[26] = {0};
    for (int i = 0; i < input.length(); i++) {
        int length = input[i] - 'A';
        if (length < 26 && length >= 0) {
            chars[length]++;
        }
    }
    int max = 0;
    int maxIndex = 0;
    for (int i = 0; i < 26; i++) {
        //std::cout << chars[i] << " " << i << std::endl;
        if (max <= chars[i]) { max = chars[i]; maxIndex = i;}
    }
    return 'A' + maxIndex;
}

void parseCaesar(std::string input, int offset) {
    //std::cout << offset << std::endl;
    for (int i = 0; i < input.length(); i++) {
        if (input[i] >= 'A' && input[i] <= 'Z') {

            int index = (input[i] - 'A' - offset + 26) % 26;
            /*while (index < 0) {
                index += 26;
            }*/
            std::cout << (char)(index + 'A');
        }else {
            std::cout << input[i];
        }
    }
    std::cout << std::endl;
}
int main() {
    std::string input_ln1, text_block = "";
    while (true) {
        //std::cin >> input_ln1;
        std::getline(std::cin, input_ln1);
        //scanf("%[^\n]", input_ln1);
        if (input_ln1 == "START") {
            text_block = "";
        } else if (input_ln1 == "END") {
            text_block = toUpper(text_block);
            //std::cout << getMostPopularChar(text_block);
            int offset = (getMostPopularChar(text_block) - 'E' + 26) % 26;
            //std::cout << offset << std::endl;
            parseCaesar(text_block, offset);
            text_block = "";
        } else if (input_ln1 == "ENDOFINPUT") {
            break;
        } else {
            if (text_block != "") {
                text_block += "\n" + input_ln1;
            } else {
                text_block += input_ln1;
            }
        }
    }



    return 0;
}
