#include <bits/stdc++.h>
using namespace std;
int facto(int n)
{
    if(n==0) return 1;
    int fact = facto(n - 1) * n;
    return fact;
}
int main()
{
    int num;
    cin>>num;
    cout<<facto(num);
    return 0;
}