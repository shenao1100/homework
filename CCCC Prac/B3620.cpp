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
int main(){
    int inp;
    string str;
    cin >> inp >> str;
    int result = 0, bit = 0;
    for (int i = str.size() - 1; i >= 0; i--){
        result += getNum(str[i]) * pow(inp, bit);
        bit++;
    }
    cout << result << endl;

    return 0;
}
