#include <iostream>
#include <iomanip>
#include <cstdio>
/**
 *
 * @param cha
 * @return 1:num, 0:char, 2:calcMark, -1: nothing
 */
int intCharOrMark(char cha) {
    if (cha <= 57 && cha >= 48) {
        return 1;
    } else if (cha >= 65 && cha <= 90 || cha >= 97 && cha <= 122) {
        return 0;
    } else if (cha != 10 && cha != 0) {
        return 2;
    } else {
        return -1;
    }
}

int main() {
    float leftConstant = 0, rightConstant = 0, leftX = 0, rightX = 0;
    char input[255];
    //std::getline(std::cin, input);
    scanf("%[^\n]", input);
    float tmp = 0;
    bool tmpPN = true; // true for positive
    bool isLeft = true;
    char unknown = 'x';
    for (int i = 0; i < 255; i++) {
        //std::cout << "input[" << i << "] = " << input[i] << " (hex: " << std::hex << (int)input[i] << ")" << std::endl;
        if (input[i] == 0 || input[i] == '\n') {break;}
        switch (intCharOrMark(input[i])) {
            case 1:
                // 处理进位
                if (tmp != 0) {
                    tmp = tmp * 10 + (input[i] - '0');
                } else {
                    tmp = input[i] - '0';
                }
                break;
            case 0:
                unknown = input[i];
                if (isLeft) {
                    leftX += (tmpPN ? 1 : -1) * (tmp == 0 ? 1 : tmp);

                }else {
                    rightX += (tmpPN ? 1 : -1) * (tmp == 0 ? 1 : tmp);
                }
                tmp = 0;
                tmpPN = true;

                break;
            case 2:
                //std::cout << input[i] << std::endl;
                if (input[i] == '=') {
                    isLeft = false;
                    leftConstant += (tmpPN ? 1 : -1) * tmp;
                    tmp = 0;
                    tmpPN = true;
                } else if (input[i] == '+') {
                    if (isLeft) {
                        leftConstant += (tmpPN ? 1 : -1) * tmp;

                    }else {
                        rightConstant += (tmpPN ? 1 : -1) * tmp;
                    }
                    tmpPN = true;
                    tmp = 0;

                } else if (input[i] == '-') {
                    //std::cout << "minues" << tmp << std::endl;
                    if (isLeft) {
                        leftConstant += (tmpPN ? 1 : -1) * tmp;

                    }else {
                        rightConstant += (tmpPN ? 1 : -1) * tmp;
                    }
                    tmpPN = false;
                    tmp = 0;

                }
            break;
        }
    }
    // 最后一个
    rightConstant += (tmpPN ? 1 : -1) * tmp;
    //std::cout << leftConstant << " " << rightConstant << " "  << leftX << " "  << rightX << std::endl;
    float result = (leftConstant - rightConstant) / (rightX - leftX);
    if (result == -0) {
        result = 0;
    }
    std::cout << std::fixed <<  std::setprecision(3) << unknown << "=" << result << std::endl;
    return 0;
}
