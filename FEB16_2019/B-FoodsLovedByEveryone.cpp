// https://atcoder.jp/contests/abc118/tasks/abc118_b
#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main()
{
    int no_of_people, no_of_food;
    cin >> no_of_people >> no_of_food;
    std::vector<int> like_counter(no_of_food + 1, 0);
    for (int this_person = 0; this_person < no_of_people; this_person++)
    {
        int this_person_likes;
        cin >> this_person_likes;
        while (this_person_likes--)
        {
            int food;
            cin >> food;
            like_counter[food]++;
        }
    }
    int count = 0;
    for (int this_food = 1; this_food <= no_of_food; this_food++)
    {
        if (like_counter[this_food] == no_of_people)
            count++;
    }
    cout << count << endl;
    return 0;
}