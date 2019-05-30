// https://atcoder.jp/contests/abc128/tasks/abc128_b
#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

struct Restaurant
{
    int index, score;
    string name;
};
bool myMethod(const struct Restaurant &first, const struct Restaurant &second)
{
    if (first.name == second.name)
    {
        return first.score > second.score;
    }
    else
    {
        return first.name < second.name;
    }
}
int main()
{
    int n;
    cin >> n;
    vector<Restaurant> restList(n);
    for (int i = 0; i < n; i++)
    {
        restList[i].index = i + 1;
        cin >> restList[i].name >> restList[i].score;
    }
    sort(all(restList), myMethod);
    for (int i = 0; i < n; i++)
        cout << restList[i].index << endl;
    return 0;
}
