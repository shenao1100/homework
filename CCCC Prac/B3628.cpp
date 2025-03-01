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
bool check(int mid) {
    int hel = mid;
    for (int i = 0; i < arr.size(); i++) {
        hel += arr[i];
        if (hel <= 0) {
            return false;
        }
    }
    return true;

}
int main(){
    int a, tmp;
    cin >> a;
    for (int i = 0; i < a; i++) {

        cin >> tmp;
        arr.push_back(tmp);
    }
    int left = 1, right = 100000000;
    while (left < right) {
        int mid = left + (right - left) / 2;
        if (check(mid)) {
            right = mid;
        }else {
            left = mid + 1;
        }
    }
    cout << right << endl;
    return 0;
}