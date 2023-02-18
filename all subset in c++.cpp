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
    int ct = pow(2,n);
    for(int i=0; i<ct; i++)
    {
        for(int j=0; j<n; j++)
        {
            if((i & (i << j)) != 0)
            {
                cout<<arr[j]<<" ";
            }
        }
        cout<<endl;
    }
}
