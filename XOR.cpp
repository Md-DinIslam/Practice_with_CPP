#include <bits/stdc++.h>
using namespace std;
void PrintBinary(int nums){
    for(int i = 8;i>=0;--i){
        cout<<((nums >> i) & 1);
    }
    cout<<'\n';
}
int main()
{
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
    // int nums;
    // cin>>nums;
    // PrintBinary(nums);

    // Swapping Using XOR
    int a = 5, b = 8;
    PrintBinary(a);
    PrintBinary(b);
    int a1 = a ^ b;
    PrintBinary(a1);
    int b1 = a1 ^ b;
    PrintBinary(b1);
    a1 = a1 ^ b1;
    PrintBinary(a1);
    cout<<a1<<" "<<b1<<endl;
    // Time: O(N) & Space: O(1)
    int n;
    cin>> n;
    int x;
    int ans = 0;
    for(int i = 0;i<n;++i){
        cin>>x;
        ans ^= x;
    }
    cout<<ans<<endl;
    return 0;
}