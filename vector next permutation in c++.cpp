#include <bits/stdc++.h>
using namespace std;
void print(vector<int> &v, int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> v;
    int n, a;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    while (next_permutation(v.begin(), v.end()))
    {
        print(v, n);
    }
}