// https://atcoder.jp/contests/abc163/tasks/abc163_b
#include <iostream>
typedef long long ll;
using namespace std;

int main() {
    ll no_of_days, no_of_assignments;
    cin >> no_of_days >> no_of_assignments;

    ll total_assignment_time = 0LL;
    
    while (no_of_assignments--) {
        ll this_assignment;
        cin >> this_assignment;

        total_assignment_time += this_assignment;
    }

    ll ans = (no_of_days - total_assignment_time);
    if (ans < 0) {
        ans = -1;
    }

    cout << ans << endl;
}