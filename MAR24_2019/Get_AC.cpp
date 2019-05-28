// https://atcoder.jp/contests/abc122/tasks/abc122_c
#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
    string text;
    int n, q;
    cin >> n >> q;
    cin >> text;
    // Pre calculation array
    int dp_array[n];
    memset(dp_array, 0, sizeof(int));
    dp_array[0] = 0;
    for (int i = 1; i < n; i++)
    {
        if (text[i - 1] == 'A' && text[i] == 'C')
        {
            dp_array[i] = dp_array[i - 1] + 1;
        }
        else
        {
            dp_array[i] = dp_array[i - 1];
        }
    }
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        l--;
        r--;

        cout << dp_array[r] - dp_array[l] << endl;
    }
    return 0;
}