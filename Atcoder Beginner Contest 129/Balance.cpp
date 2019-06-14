// https://atcoder.jp/contests/abc129/tasks/abc129_b
#include <bits/stdc++.h>
#define debugi(x) cerr << "x -> " << x << endl;
#define For(i, n) for (__typeof(i) i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
#define _                             \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

#define ONLINE_JUDGE

using namespace std;
typedef long long ll;
typedef unsigned long long ull;

void solve()
{
    ll i, j, n;
    cin >> n;
    vector<int> arr(n, 0);
    For(i, n)
    {
        cin >> arr[i];
    }
    i = 0;
    j = arr.size() - 1;
    ll sum_1 = 0LL, sum_2 = 0LL;
    while (i <= j)
    {
        if (sum_1 <= sum_2)
        {
            sum_1 += arr[i++];
        }
        else
        {
            sum_2 += arr[j--];
        }
    }
    cout << abs(sum_1 - sum_2) << endl;
}
int main()
{
    _;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ull testcases = 1LL;
    // cin >> testcases;
    while (testcases--)
        solve();
    return 0;
}