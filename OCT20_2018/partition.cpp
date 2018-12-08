#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll max(ll a,ll b)
{
    return (a>b?a:b);
}
int main()
{
    ll N,M;
    cin>>N>>M;
    ll gcd=1,i;
    for(i=1;i*i<=M;i++)
    {
        if(M%i==0)
        {
            ll factor_1=i,factor_2=M/i;
            if(factor_1*N<=M) gcd=max(gcd,factor_1);
            if(factor_2*N<=M) gcd=max(gcd,factor_2);
        }
    }
    cout<<gcd<<endl;
    return 0;
}