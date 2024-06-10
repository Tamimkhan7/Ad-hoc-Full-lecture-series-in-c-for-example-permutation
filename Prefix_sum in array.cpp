#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];//array input neoya hocce
    }
    int pre[n];//prefix ar joono initialization kora hoyece
    pre[0] = arr[0];
    for(int i=1; i<n; i++)
    {
        pre[i] = pre[i-1]+arr[i];//value gula sum kora hoyece and prefix ar initilaztion kora hoyece
    }
    int t;
    cin>>t;
    while(t--)//quarry jonno loop use kora hoyece
    {
        int l,r;
        cin>>l>>r;//koto theke koto number value sum korbo tar jonno input neoya hocce
        if(l==0)cout<<pre[r]<<endl;
        else cout<<pre[r]-pre[l-1]<<endl;
    }
}
