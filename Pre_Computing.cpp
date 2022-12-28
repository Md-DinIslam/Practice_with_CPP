#include <bits/stdc++.h>
using namespace std;
const int N= 1e7, M = 1e5;;
int a[M];
int pre_count[N];
int main()
{
    int n;
    cin>>n;
    for(int i = 0;i<n;i++)
    {
        cin>>a[i];
        pre_count[a[i]]++;
    }
    int q;cin>>q;
    while(q--)
    {
        int x;cin>>x;
        cout<<pre_count[x]<<endl;
    }
    return 0;
}