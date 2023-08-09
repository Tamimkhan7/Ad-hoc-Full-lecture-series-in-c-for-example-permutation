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
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ct = pow(2, n);
    for (int i = 0; i < ct; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i & (i << j)) != 0) // this line means , suppose i=1, i<<j menas, suppose j=1, like that= 1*2, j time 2 value dara gun i ar valueke, tahole ans cole asbe
            {
                cout << arr[j] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
