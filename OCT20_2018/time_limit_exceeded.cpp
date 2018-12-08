#include<bits/stdc++.h>

using namespace std;
#define MAX 1003
int main()
{
    int N,T,i;
    cin>>N>>T;
    int c[MAX],t[MAX];
    for(int i=0;i<N;i++)
    {
        cin>>c[i]>>t[i];
    }
    int ans=INT_MAX;
    for(int i=0;i<N;i++)
    {
        if(c[i]<ans && t[i]<=T)
        ans=c[i];
    }
    if(ans!=INT_MAX)
    cout<<ans<<endl;
    else cout<<"TLE"<<endl;
    return 0;
}