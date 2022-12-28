#include <bits/stdc++.h>
using namespace std;
int sum(int n,int arr[])
{
    if(n<0) return 0;
    int allsum = arr[n]+ sum(n-1,arr);
    return allsum;
}
int main()
{
    int num;
    cin>>num;
    int arr[num];
    for(int i=0;i<num;i++)
    {
        cin>>arr[i];
    }
    cout<<sum(num,arr);
    return 0;
}