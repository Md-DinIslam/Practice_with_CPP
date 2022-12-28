#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int f1,f2,Gcd; cin>>f1>>f2;
        int minf=f1<f2?f1:f2;
        for(int i=1; i<=minf;i++)
        {
            if(f1%i==0 && f2%i==0)
            {
                Gcd=i;
            }
        } cout<<Gcd<<endl;
    }
    return 0;
}