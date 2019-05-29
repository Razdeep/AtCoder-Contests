// https://atcoder.jp/contests/abc127/tasks/abc127_c
#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
    int no_of_cards, no_of_gates;
    cin >> no_of_cards >> no_of_gates;
    int max_left = INT_MIN, min_right = INT_MAX;
    for (int i = 0; i < no_of_gates; i++)
    {
        int left, right;
        cin >> left >> right;
        max_left = max(max_left, left);
        min_right = min(min_right, right);
    }
    if (max_left > min_right)
        cout << 0 << endl;
    else
        cout << min_right - max_left + 1 << endl;
    return 0;
}