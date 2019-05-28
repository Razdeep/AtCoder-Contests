// https://atcoder.jp/contests/abc122/tasks/abc122_b
// NOT SOLVED
#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
int maxYield(string text, int starting)
{
    int count = 0;
    if (text.substr(starting, 4).find("A") != std::string::npos)
        count++;
    if (text.substr(starting, 4).find("T") != std::string::npos)
        count++;
    if (text.substr(starting, 4).find("G") != std::string::npos)
        count++;
    if (text.substr(starting, 4).find("C") != std::string::npos)
        count++;
    return count;
}
int main()
{
    string text;
    cin >> text;
    int answer = 0;
    for (int i = 0; i < text.size(); i++)
    {
        answer = std::max(answer, maxYield(text, i));
    }

    cout << answer << endl;
    return 0;
}