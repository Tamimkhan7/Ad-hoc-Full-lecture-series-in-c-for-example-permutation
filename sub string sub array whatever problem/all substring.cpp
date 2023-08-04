#include <bits/stdc++.h>
using namespace std;
void substring(string s, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            // substring always moving front
            cout << s.substr(i, j) << endl;
        }
    }
}
int main()
{
    string s;
    cin >> s;
    int len = s.size();
    substring(s, len);
}