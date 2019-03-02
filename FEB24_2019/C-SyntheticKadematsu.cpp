// https://atcoder.jp/contests/abc119/tasks/abc119_c
/**
 * 
 * We must notice that the operation of adding or subtracting 1 does not affect the operation of 'combining' two or more bamboos. 
 * For every bamboo, there are 4 options - 
 * 1. It is not touched. 
 * 2. It is added to the total of A.
 * 3. It is added to the total of B. 
 * 4. It is added to the total of C.

-----------

Let us brute force through all these possibilities. There are only 8 bamboos. We can brute force through these 4^8 = 2^16 possibilities. 

Let us say a = b = c = 0 at the beginning. 

We will brute force through these possibilities and add 10 to the cost at each step.

When we have finished processing all bamboos, we can then increment and decrement as many times as we want to so that we get A, B and C.

So the final cost is |a - A| + |b - B| + |c - C| - 30

--------

Why do we subtract 30 in the end ?

Because the process of adding one bamboo to one of (a, b, c) corresponds to the operation of choosing a bamboo for one of (a, b, c). 

The process of choosing the second bamboo of (a, b, c) corresponds to addition.

There is only cost of adding. There is no cost for choosing a bamboo. So we subtract the first 10 for each of (a, b, c).

----------

What do we do when do not add anything to any of (a, b, c) ? 

We must reject it and return oo. 

Why ? 

Because we have not chosen a bamboo for (a, b, c).

We cannot apply addition/subtraction if we have not chosen a pre-existing bamboo. (It is not allowed to increment a bamboo from scratch.)

So, not choosing a bamboo is not valid. 

-----------
 *
 * Explanation credits: @mathprogrammer
 * 
 */
#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
#define forn(n) for (int i = 0; i < n; i++)
#define min_3(a, b, c) std::min(a, std::min(b, c))
#define min_4(a, b, c, d) std::min(std::min(a, b), std::min(c, d))
using std::cin;
using std::cout;
using std::endl;

typedef long long ll;

const int oo = 1e9;
std::vector<int> bamboo_list;
int A, B, C;

int dfs(int n, int a, int b, int c)
{
    if (n == 0)
        return (min_3(a, b, c) > 0) ? abs(A - a) + abs(B - b) + abs(C - c) - 30 : oo;
    int do_nothing = dfs(n - 1, a, b, c);
    int sum_a      = dfs(n - 1, a + bamboo_list[n], b, c) + 10;
    int sum_b      = dfs(n - 1, a, b + bamboo_list[n], c) + 10;
    int sum_c      = dfs(n - 1, a, b, c + bamboo_list[n]) + 10;

    return min_4(do_nothing, sum_a, sum_b, sum_c);
}
int main()
{
    int bamboo_count;
    cin >> bamboo_count;
    cin >> A >> B >> C;
    bamboo_list.resize(bamboo_count + 1);
    for (int i = 1; i <= bamboo_count; i++)
        cin >> bamboo_list[i];
    int answer = dfs(bamboo_count, 0, 0, 0);
    cout << answer << endl;
    return 0;
}