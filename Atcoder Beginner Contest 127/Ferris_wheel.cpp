// https://atcoder.jp/contests/abc127/tasks/abc127_a
#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
    int age, cost;
    cin >> age >> cost;
    if (age > 12)
        cout << cost << endl;
    else if (age >= 6 && age <= 12)
        cout << cost / 2 << endl;
    else
        cout << 0 << endl;
    return 0;
}