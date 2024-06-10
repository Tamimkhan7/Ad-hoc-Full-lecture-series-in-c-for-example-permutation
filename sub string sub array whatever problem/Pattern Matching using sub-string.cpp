#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, ss;
    getline(cin, s);
    cin >> ss;
    int c = 0, n = s.size();
    int m, temp;
    m = ss.size();
    for (int i = 0; i < n; i++)
    {
        int j = 0;
        if (s[i] == ss[j])
        {
            temp = i + 1;
            while (s[i] == ss[i])
        }
    }
    cout << temp << endl;
}