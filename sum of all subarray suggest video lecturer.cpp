#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    int n;
    int sum =0;
    while(t--)//test case
    {
        cin>>n;//total array
        int arr[n];
        for(int i=1; i<=n; i++)
        {
            cin>>arr[i];//input taken user
        }
        for(int i=1; i<=n; i++)
        {
            sum += (i*(n-i+1))*arr[i];//total logic and sathe sathe sum kora hocce
            cout<<sum<<endl;
        }
        cout<<"last sum"<<sum<<endl;
    }
}
