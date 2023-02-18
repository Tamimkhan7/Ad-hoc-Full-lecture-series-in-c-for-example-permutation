#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)//test case
    {
        int n;
        cin>>n;//array size
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];//input of the array
        }
        sort(arr, arr+n);//sorting into the array
        int maxi=0, mini=0;
        int a=1;//
        for(int i=0; i<n; i++)
        {
            maxi += arr[i]*a;//same logic but aita age maximum value gula niyeci first 1, second 2, third 4 ai vabe barte thakbe ai logic tai likheci
            a *=2;
        }
        cout<<"maximum subset is "<<maxi<<endl;//minimum value print koreci
        a=1;
        for(int i=n-1; i>=0; i--)
        {
            mini += arr[i]*a;//first 1, second 2, third 4 ai vabe barte thakbe ai logic tai likheci
            a *= 2;
        }
        cout<<"manimum subset is "<<mini<<endl;//maximum value print koreci
        int max_min = maxi-mini;//max theke minimum value subtraction koreci
        cout<<max_min<<endl;
    }
}


/* array of the size 3
arr = 1 2 3
subset = 1, 1 2, 1 2 3, 2 , 2 3, 3, 1 3
max = 1 2 3 2 3 3 3  = 1 2 2 3 3 3 3 = 1*1 2*2 3*4 = 1 2 4 8 16 32 ....//total logic, mind of my main logic
min = 1 1 1 2 2 3  1 = 1 1 1 1 2 2 3 = 1*4 2*2 3*1 = 32 16 8 4 2 1......//total logic, mind of my main logic

*/
