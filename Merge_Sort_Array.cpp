#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
long long int arr[N];
void Merge(int l, int r, int mid)
{
    int l_sz = mid - l + 1;
    int larr[l_sz + 1];
    int r_sz = r - mid;
    int rarr[r_sz + 1];
    for (int i = 0; i < l_sz; i++)
    {
        larr[i] = arr[i + l];
    }
    for (int i = 0; i < r_sz; i++)
    {
        rarr[i] = arr[i + mid + 1];
    }
    larr[l_sz] = rarr[r_sz] = INT_MAX;
    int l_i = 0;
    int r_i = 0;
    for (int i = l; i <= r; i++)
    {
        if (larr[l_i] <= rarr[r_i])
        {
            arr[i] = larr[l_i];
            l_i++;
        }
        else
        {
            arr[i] = rarr[r_i];
            r_i++;
        }
    }
}
void MergeSort(int l,int r)
{
    if(l==r) return;
    int mid = (l+r)/2;
    MergeSort(l,mid);
    MergeSort(mid+1,r);
    Merge(l,r,mid);
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[n];
    }
    MergeSort(0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}