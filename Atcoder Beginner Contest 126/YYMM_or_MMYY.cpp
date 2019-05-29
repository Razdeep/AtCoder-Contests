// https://atcoder.jp/contests/abc126/tasks/abc126_b
#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
    int text;
    cin >> text;
    int a = text / 100;
    int b = text % 100;
    if (a >= 1 && a <= 12 && b >= 1 && b <= 12)
        cout << "AMBIGUOUS" << endl;
    else if (a >= 1 && a <= 12)
        cout << "MMYY" << endl;
    else if (b >= 1 && b <= 12)
        cout << "YYMM" << endl;
    else
        cout << "NA" << endl;
    return 0;
}