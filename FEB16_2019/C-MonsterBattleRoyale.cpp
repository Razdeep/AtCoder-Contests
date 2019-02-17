// https://atcoder.jp/contests/abc118/tasks/abc118_c
/**
 * Explanation : Answer is the gcd of the entire array
 * 
*/

#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int main()
{
    ll n;
    cin >> n;
    int answer = 0, this_health;
    for (ll i = 0; i < n; i++)
    {
        cin >> this_health;
        answer = (i == 0) ? this_health : gcd(answer, this_health);
    }

    cout << answer << endl;
    return 0;
}