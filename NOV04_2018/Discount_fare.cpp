// https://abc113.contest.atcoder.jp/tasks/abc113_a
#include<bits/stdc++.h>
typedef long long ll;
int main()
{
    ll train,bus;
    scanf("%lld%lld",&train,&bus);
    printf("%lld",train+(bus/2));
    return 0;
}