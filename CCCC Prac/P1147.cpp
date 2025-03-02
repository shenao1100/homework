#include <iostream>
#include <iomanip>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <map>
#include <semaphore.h>
#include <unordered_set>

using namespace std;

vector<int> arr;
vector<int> sum_arr;
int main(){
    int a;
    cin >> a;
    sum_arr.push_back(0);
    for (int i = 1; i <= a; i++) {
        //arr.push_back(i);
        sum_arr.push_back(sum_arr[i - 1] + i);
    }
    for (int i = 1; i < a; i++) {
        for (int j = i + 1; j < a; j++) {
            if (sum_arr[j] - sum_arr[i] > a) {
                break;
            }
            if (sum_arr[j] - sum_arr[i] == a) {
                cout << i + 1 << " " << j << endl;
            }
        }
    }
    return 0;
}