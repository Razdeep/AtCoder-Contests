// https://atcoder.jp/contests/abc126/tasks/abc126_a
#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
    int n, k;
    cin >> n >> k;
    string text;
    cin >> text;
    for (int i = 0; i < text.size(); i++)
    {
        if (i + 1 == k)
            cout << (char)(text[i] + 'a' - 'A');
        else
            cout << text[i];
    }
    cout << endl;
    return 0;
}