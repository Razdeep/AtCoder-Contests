// https://abc113.contest.atcoder.jp/tasks/abc113_b
#include<bits/stdc++.h>
typedef long long ll;
int main()
{
    ll ans;
    ll nearest=INT_MAX;
    ll N,T,A;
    scanf("%lld%lld%lld",&N,&T,&A);
    for(ll i=1;i<=N;i++)
    {
        ll x;
        scanf("%lld",&x);
        ll difference=(T-(x*0.006)-A)>0?(T-(x*0.006)-A):(A-T+(x*0.006));
        if(difference<nearest)
        {
            ans=i;
            nearest=difference;
        }
    }
    printf("%lld",ans);
    return 0;
}