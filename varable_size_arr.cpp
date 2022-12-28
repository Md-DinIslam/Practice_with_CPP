#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    vector<int> ar[n];
    for(int i=0;i<n;i++)
    {
        int size;
        cin>>size;
        int value;
        for(int j=0;j<size;j++)
        {
            cin>>value;
            ar[i].push_back(value);
        }
    }
    int index,indx_val;
    for(int k=0;k<q;k++)
    {
        cin>>index>>indx_val;
        cout<<ar[index][indx_val]<<endl;
    }
    return 0;
}