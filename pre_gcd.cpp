#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        int arr[n + 10];
        int forward[n + 10];
        int backward[n + 10];
        forward[0] = backward[n + 1] = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 1; i <= n; i++)
        {
            forward[i] = __gcd(forward[i-1],arr[i]);
        }
        for (int i = n; i >= 1; i--)
        {
            backward[i] = __gcd(backward[i+1],arr[i]);
        }
        while (q--)
        {
            int f, l;
            cin >> f >> l;
            int gcd = __gcd(forward[f-1],backward[l+1]);
            cout << gcd << endl;
        }
    }
    return 0;
}