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
//pick starting point
    for(int i=0; i<n; i++)
    {
        //pick ending point
        for(int j=i; j<n; j++)
        {
            //print subarray between current starting
            //end ending points
            for(int k = i; k<=j; k++)
            {

                cout<<ar[k]<<" ";
            }

            cout<<endl;
        }
    }

}
