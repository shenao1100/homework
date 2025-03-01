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

bool compare(int a, int b){
    return b > a;
}
int main(){
    int a, b, tmp, tmp2;
    cin >> a >> b;
    vector<int> arr, arr2;
    cin >> tmp;
    arr.push_back(tmp);

    for (int i = 1; i < a; i++){
        cin >> tmp2;
        arr.push_back(tmp2 - tmp);
        tmp = tmp2;
    }
    int d, e, f;
    for (int i = 0; i < b; i++){
        cin >> d >> e >> f;
        arr[d - 1] += f;
        if (e < a){arr[e] -= f;}

    }
    int min = arr[0];
    for (int i = 1; i < a; i++){
        arr[i] += arr[i-1];
        min = min < arr[i] ? min : arr[i];
    }
    //sort(arr.begin(), arr.end(), compare);
    cout << min;
    return 0;
}