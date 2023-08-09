#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define sq(x) (x) * (x)
#define PI acos(-1.0)
#define all(x) x.begin(), x.end()
#define mod 1000000007
typedef long long int ll;
typedef unsigned long long int llu;
#define pb push_back
#define pop pop_back()
#define len(a) sizeof(a)
#define lc (n * 2)
#define rc ((n * 2) + 1)
int main()
{
    faster;
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int c = 0;
        int len = s.size();
        for (int i = 0; i < len; i++)
        {
            for (int j = i; j < len; j++)
            {
                for (int k = i; k <= j; k++)
                {
                    cout << s[k];
                }
                c++;
                cout << endl;
            }
        }
        cout << c << endl;
    }
}
/*int t;
cin >> t;
while (t--) // test case
{
    string s; // string
    cin >> s;
    int len = s.size(); // string size
    int c = 0;
    for (int i = 0; i < len; i++) // first index kore ber korteci
    {
        for (int j = i; j < len; j++) // i ar value thek len index projnto value cout korteci
        {
            for (int k = i; k <= j; k++) // i and j ar value compare kore k ar value print korteci
            {
                cout << s[k];
            }
            c++; // counter bosaici jate koyta value print hoyece count korte pari
            cout << endl;
        }
    }
    cout << c << endl; // counter value print korteci
}*/