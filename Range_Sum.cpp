#include <bits/stdc++.h>
using namespace std;
const int N = 1e7 + 10;
int sum[N];
int presum[N];
int main()
{
    int size;
    cin >> size;
    for (int i = 1; i <= size; i++)
    {
        cin >> sum[i];
        presum[i] = presum[i-1]+sum[i];
    }
    int q;
    cin >> q;
    while (q--)
    {
        int f, l;
        cin >> f >> l;
        cout<<presum[l]-presum[f-1]<<endl;
    }
    return 0;
}