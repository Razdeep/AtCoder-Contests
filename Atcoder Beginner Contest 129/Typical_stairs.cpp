// https://atcoder.jp/contests/abc129/tasks/abc129_c
// NOT SOLVED
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

const uint64_t MOD = 1e9 + 7;
const uint64_t INF = 1e9;

void solve()
{
    ll no_of_steps, no_of_broken_steps, i;
    cin >> no_of_steps >> no_of_broken_steps;
    vector<int> arr(no_of_broken_steps, -INF);
    For(i, no_of_broken_steps)
    {
        cin >> arr[i];
    }
    vector<ll> no_of_ways(no_of_steps + 1, 0);

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