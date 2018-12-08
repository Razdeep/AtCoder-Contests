// https://abc115.contest.atcoder.jp/tasks/abc115_c
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int number_of_trees,number_of_decorated;
    vector<int> treeRow;
    cin>>number_of_trees>>number_of_decorated;
    for(int i=0;i<number_of_trees;i++)
    {
        int this_tree;
        cin>>this_tree;
        treeRow.push_back(this_tree);
    }
    sort(treeRow.begin(),treeRow.end());
    
    int min=INT_MAX;
    for(int i=0;i<number_of_trees-number_of_decorated+1;i++)
    {
        int this_difference=treeRow[number_of_decorated+i-1]-treeRow[i];
        min=(this_difference<min)?this_difference:min;
    }
    cout<<min<<endl;
    return 0;
}