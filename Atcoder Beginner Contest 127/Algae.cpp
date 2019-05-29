// https://atcoder.jp/contests/abc127/tasks/abc127_b
#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
    int current_algae, rate, bias;
    cin >> rate >> bias >> current_algae;
    for (int i = 0; i < 10; i++)
    {
        current_algae = rate * current_algae - bias;
        cout << current_algae << endl;
    }
    return 0;
}