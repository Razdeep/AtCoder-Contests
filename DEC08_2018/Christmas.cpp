// https://abc115.contest.atcoder.jp/tasks/abc115_d
// PARTIALLY SOLVED
#include<bits/stdc++.h>
using namespace std;
string makeBurger(int n)
{
    string temp;
    if(n==0)
    {
        temp+='P';
        return temp;
    }
    temp+='B';
    temp+=makeBurger(n-1);
    temp+='P';
    temp+=makeBurger(n-1);
    temp+='B';
    return temp;
}
int main()
{
    int n,x;
    cin>>n>>x;
    string myBurger=makeBurger(n);
    int count=0;
    for(int i=0;i<x;i++)
    {
        if(myBurger[i]=='P')
        count++;
    }
    cout<<count<<endl;
    return 0;
}