#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    int n;
    cin>>n;
    int x;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        v.push_back(x);//value vector a dilam
    }

    sort(v.begin(), v.end());//vector ar value ta sort kore nilam

    while(next_permutation(v.begin(), v.end()))//permutation korlam
    {
        for(int i=0; i<n; i++)
        {
            cout<<v[i]<<" ";//vector print korlam
        }
        cout<<endl;
    }
}
