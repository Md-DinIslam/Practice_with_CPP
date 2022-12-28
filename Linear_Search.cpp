#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    
    int n; cin>>n;
    int ar[n];
    for(int i =0;i<n;i++)
    {
        cin>>ar[i];
    }
    int s_value, location = -1; cin>>s_value;
    for(int i = 0;i<n-1;i++)
    {
        if(ar[i] == s_value)
        {
            location = i;
        }
        
    }
    if(ar[location] == s_value)
        {
            cout<<"The Location is "<<location<<endl;
        }
        else{
            cout<<"Data Not Found"<<endl;
        }
    return 0;
}