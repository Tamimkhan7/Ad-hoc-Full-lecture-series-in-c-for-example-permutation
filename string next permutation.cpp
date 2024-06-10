#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int c=0;
    sort(s.begin(), s.end());//string ar value ta sort kore niyeci
    while(next_permutation(s.begin(), s.end()))
    {

        cout<<s<<endl;
        c++;//cout koreci koy  bar value dicce

    }
    cout<<c<<endl;
}
