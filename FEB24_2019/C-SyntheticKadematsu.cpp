// https://atcoder.jp/contests/abc119/tasks/abc119_c
// NOT SOLVED
#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
    ll cost = 0;
    ll n, a, b, c;
    bool done_a, done_b, done_c;
    done_a = done_b = done_c = false;
    cin >> n >> a >> b >> c;
    vector<int> arr(n, -1);
    for (ll i = 0; i < n; i++)
        cin >> arr[i];
    sort(all(arr));
    reverse(all(arr));
    for (int i = 0; i < n; i++)
    {
        if (a - arr[i] <= 10 && a - arr[i] >= 0 && !done_a)
        {
            cost += (a - arr[i]);
            done_a = true;
        }
        else if (b - arr[i] <= 10 && b - arr[i] >= 0 && !done_b)
        {
            cost += (b - arr[i]);
            done_b = true;
        }
        else if (c - arr[i] <= 10 && c - arr[i] >= 0 && !done_c)
        {
            cost += (c - arr[i]);
            done_c = true;
        }
    }
    if (done_a && done_b && done_c)
    {
        cout << cost << endl;
        return 0;
    }
    if(!done_a)
    {

    }
    if(!done_b)
    {

    }
    if(!done_c)
    {
        
    }
    return 0;
}