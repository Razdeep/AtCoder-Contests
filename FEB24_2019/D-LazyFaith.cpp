// https://atcoder.jp/contests/abc119/tasks/abc119_d
#include <bits/stdc++.h>
#define ALL(V) V.begin(), V.end()
#define FORN(i, n) for (i = 0; i < n; i++)
typedef long long ll;
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    int no_of_shrines, no_of_temples, no_of_queries, i;
    cin >> no_of_shrines >> no_of_temples >> no_of_queries;
    vector<int> shrines(no_of_shrines), temples(no_of_temples), queries(no_of_queries);
    FORN(i, no_of_shrines)
        cin >> shrines[i];
    FORN(i, no_of_temples)
        cin >> temples[i];
    FORN(i, no_of_queries)
        cin >> queries[i];
    
    return 0;
}