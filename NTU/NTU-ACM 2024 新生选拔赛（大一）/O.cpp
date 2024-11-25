#include<iostream>
#include<string>
#include<vector>

using namespace std;
void swap_fn(string &a, string &b) {
    string tmp = a;
    a = b;
    b = tmp;
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<string> text_block(n);
    for (int i = 0;i < n;i++)
    {
        cin >> text_block[i];
    }
    for (int i = 0;i < m;i++)
    {
        int a, b;
        cin >> a >> b;
        swap(text_block[a-1], text_block[b-1]);
    }
    for (int i = 0;i < n;i++)
    {
        std::cout << text_block[i] << endl;
    }
    return 0;
}