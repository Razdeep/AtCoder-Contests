// https://atcoder.jp/contests/abc128/tasks/abc128_a
#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
    int apples, pieces;
    cin >> apples >> pieces;
    int total_pieces = (3 * apples) + pieces;
    cout << total_pieces / 2 << endl;
    return 0;
}