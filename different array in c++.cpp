#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l,r,v,i,n;
    cin>>n;
    int arr[n];
    for(i=0; i<n; i++)
    {
        cin>>arr[i];//array input niyeci
    }
    int q;
    cin>>q;
    while(q--)//koto ta query nino tar jonno value nilam
    {
        cin>>l>>r>>v;//qurry gula koto theke koto projntto colbe koto pronto sum korbe v holo sathe koto value jog korbe
        for(i = l; i<=r; i++)// koto index theke koto index sum korbo tar jonno loop
        {
            arr[i] += v;//index ar sathe v ar value sum korteci
        }
    }
    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";//sum ar value gula print korteci
    }
    cout<<endl;
}
