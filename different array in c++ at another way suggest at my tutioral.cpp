#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int diff[n+1] = {0};// all value zero in my array
    int q;
    cin>>q;//koyta query hobe tar value print nicce
    while(q--)
    {
        int l,r,v;//query kothay theke suru hobe and kothay sesh hobe ar jonno first l and then r niyece ar v holo value ja amader array sathe sum korte hobe
        cin>>l>>r>>v;
        diff[l] += v;//diff value gula l ar man change korbo sum kore kore
        diff[r+1] -= v;//diff value gula r ar man change korbo subtraction kore kore
    }
    for(int i=1; i<n; i++)
    {
        diff[i] += diff[i-1];//prefix sum kore diff array value gula
    }
    for(int i=0; i<n; i++)
    {
        arr[i] += diff[i];//init array and prefix sum koreci
    }
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";//now array gula print koreci
    }
    cout<<endl;
}

