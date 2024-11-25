#include<iostream>

using namespace std;
int main()
{
    int N, M = 0;
    cin >> N;
    // 这总不会超内存了吧
    for (int a = 1; a <= N; a++)
    {
        for (int b = 1; b <= N && a * b <= N; b++)
        {
            M++;
        }
    }
    cout << M << endl;
    for (int a = 1; a <= N; a++)
    {
        for (int b = 1; b <= N && a * b <= N; b++)
        {
            cout << a << " " << b << endl;
        }
    }

    return 0;
}
