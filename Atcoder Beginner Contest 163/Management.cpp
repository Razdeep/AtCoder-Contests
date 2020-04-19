// https://atcoder.jp/contests/abc163/tasks/abc163_c
#include <iostream>
#include <vector>
typedef long long ll;
using namespace std;

int main() {

    int n;
    cin >> n;

    constexpr int MAX = int(2e5) + 5;
    vector<int> arr(n);
    vector<int> freq(MAX, 0);

    for (int i = 1; i < n; ++i) {
        cin >> arr[i];
        arr[i]++;
        freq[arr[i]]++;
    }

    ll ans = 0;

    for (int i = 1; i <= n; ++i) {
        cout << freq[i + 1] << endl;
    }

    return 0;
}