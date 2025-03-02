#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>

using namespace std;

int getNum(char a){
    if (a >= 'A' && a <= 'Z'){
        return a - 'A' + 10;
    } else {
        return a - '0';
    }
}
char getChar(int a){
    if (a >= 10){
        return 'A' + a - 10;
    } else {
        return '0' + a;
    }
}




int main(){
    int a, b, c;
    string str = "";
    string result = "";
    cin >> a >> b;
    while (a > 0){
        str += getChar(a % b);
        a = a / b;
    }
    for (int i = str.size() - 1; i >= 0; i--){
        result += str[i];
    }
    cout << result << endl;

    return 0;
}
