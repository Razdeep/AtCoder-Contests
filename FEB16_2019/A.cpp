// https://atcoder.jp/contests/abc118/tasks/abc118_a
#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
    int a, b;
    cin >> a >> b;
    if (b % a == 0)
        cout << a + b << endl;
    else
        cout << b - a << endl;
    return 0;
}