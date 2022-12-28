#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int length,part;
        cin>>length>>part;
        if(length%part==0)
        {
            cout<<"0"<<endl;
        }
        else 
        {
            cout<<"1"<<endl;
        }
    }
    return 0;
}