#include <bits/stdc++.h>
using namespace std;
int GCD(int a, int b){
    if(b == 0) return a;
    return gcd(b, a%b);
}
int main()
{
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
    int a,b;
    cin>>a>>b;
    int gcd = GCD(a,b);
    cout<<gcd<<endl;
    int lcm = (a*b)/gcd;
    cout<<lcm<<endl;
    return 0;
}