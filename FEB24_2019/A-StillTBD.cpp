// https://atcoder.jp/contests/abc119/tasks/abc119_a
#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
    string text;
    cin >> text;
    int year = atoi(text.substr(0, 4).c_str());
    int month = atoi(text.substr(5, 2).c_str());
    int date = atoi(text.substr(8, 2).c_str());
    if (year < 2019)
        cout << "Heisei" << endl;
    else if (year == 2019 && month < 4)
        cout << "Heisei" << endl;
    else if (year == 2019 && month == 4 && date <= 30)
        cout << "Heisei" << endl;
    else
        cout << "TBD" << endl;
    return 0;
}