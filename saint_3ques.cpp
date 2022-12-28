#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    
    cin >> t;
    while (t--)
    {
        int a,b,ac=0,bc=0;
        for(int i=0; i<3;i++)
        {
            cin>>a;
            if(a==1) ac++;       
        }
        for(int i=0;i<3;i++)
        {
            cin>>b;
            if(b==1) bc++;
        }     
        if(ac==bc) cout<<"Pass"<<endl;
        else cout<<"Fail"<<endl;
    }
    return 0;
}