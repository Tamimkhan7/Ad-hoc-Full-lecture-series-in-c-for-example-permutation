#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)//test case
    {
        string s;//string
        cin>>s;
        int len = s.size();//string size
        int c=0;
        for(int i=0; i<len; i++)//first index kore ber korteci
        {
            for(int j=i; j<len; j++)//i ar value thek len index projnto value cout korteci
            {
                for(int k=i; k<=j; k++)//i and j ar value compare kore k ar value print korteci
                {
                    cout<<s[k];
                }
                c++;//counter bosaici jate koyta value print hoyece count korte pari
                cout<<endl;
            }
        }
        cout<<c<<endl;//counter value print korteci
    }

}
