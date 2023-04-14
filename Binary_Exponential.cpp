#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
int binExpoRecur(int a, int p) {
    if (p == 0) return 1;
    int result = binExpoRecur(a, p / 2);
    /* ODD Check */
    if (p & 1) return (a * (result * 1LL * result) % mod) % mod;
    /* Otherwise EVEN */
    else return (result * 1LL * result) % mod;
}
int binExpBit(int a, int p) {
    int ans = 1;
    if (a == 0) return 0;
    while (p) {
        if (p & 1) ans = (ans * a) % mod;
        a = (a * a) % mod;
        p >>= 1;
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int a, p;
    cin >> a >> p;
    // Power Calculate Using Binary Exponential Recursion Method....
    cout << binExpoRecur(a, p) << endl;
    // cout<<binExpBit(a,p);

    return 0;
}