#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;//4
    int ar[n];
    for(int i=0; i<n; i++)
    {
        cin>>ar[i];//1 2 3 4
    }
    int ans=0;
    for(int i=0; i<n; i++)
    {
        int sum =0;
        for(int j=i; j<n; j++)
        {
            sum += ar[j];
            ans += sum;
        }
    }
    cout<<ans<<endl;
}
