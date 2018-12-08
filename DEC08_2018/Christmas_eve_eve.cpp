// https://abc115.contest.atcoder.jp/tasks/abc115_b
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sum=0;
    int number_of_items,max=INT_MIN;
    cin>>number_of_items;
    for(int i=0;i<number_of_items;i++)
    {
        int this_item;
        cin>>this_item;
        sum+=this_item;
        max=(this_item>max)?this_item:max;
    }
    sum=sum-max+(max/2);
    cout<<sum<<endl;
    return 0;
}