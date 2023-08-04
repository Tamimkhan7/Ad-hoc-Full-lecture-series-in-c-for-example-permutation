#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, ss;
    cin >> s;
    int n = s.size();
    int sum = 0, k;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            ss = s.substr(i, j);
            k = stoi(ss);
            sum += k;
        }
    }
    cout << sum << endl;
}