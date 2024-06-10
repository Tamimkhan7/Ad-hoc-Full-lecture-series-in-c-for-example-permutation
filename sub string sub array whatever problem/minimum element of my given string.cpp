#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, ss;
    cin >> s;
    int n = s.size();
    int k;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            ss = s.substr(i, j);
            k = stoi(ss);
            v.push_back(k);
        }
    }

    int m = *min_element(v.begin(), v.end());
    cout << m << endl;
}