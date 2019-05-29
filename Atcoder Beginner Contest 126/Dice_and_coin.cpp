// https://atcoder.jp/contests/abc126/tasks/abc126_c
#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
    double n, k;
    cin >> n >> k;
    double answer = 0.0;
    for (int i = 1; i <= n; i++)
    {
        double this_prob = 1.0 / n;
        int this_score = i;
        while (this_score < k)
        {
            this_score *= 2;
            this_prob /= 2;
        }
        answer += this_prob;
    }
    cout << setprecision(12) << answer << endl;
    // printf("%.12f\n", answer);
    return 0;
}