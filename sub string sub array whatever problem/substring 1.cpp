#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, ss;
    cin >> s;
    int len = s.size();
    // find holo kono kicu khuje pawa jay
    int pos = s.find(':');
    ss = s.substr(pos + 1);
    cout << ss << endl;
}