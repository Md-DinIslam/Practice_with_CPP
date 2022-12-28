#include <bits/stdc++.h>
using namespace std;
const int N = 1e3;
int arr[N][N];
long long pre_sum[N][N];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int row, coloumn;
    cin >> row >> coloumn;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= coloumn; j++)
        {
            cin >> arr[i][j];
            pre_sum[i][j] = arr[i][j] + pre_sum[i - 1][j] + pre_sum[i][j - 1] - pre_sum[i - 1][j - 1];
        }
    }
    cout << "Total Sum of Matrix: " << pre_sum[row][coloumn] << endl;
    int query;
    cin>>query;
    // while(query--)
    for(int k=1;k<=query;k++)
    {
        int a,b,x,y;
        cin>>a>>b>>x>>y;
        int range_sum = pre_sum[x][y] - pre_sum[a-1][y] - pre_sum[b-1][x] + pre_sum[a-1][b-1];
        cout<<"Sum Of Query: "<<k<<endl;
        cout<<range_sum<<endl;
    }
    // int test[1] = {5};
    // cout<<test[0]<<endl;
    // cout<<test[0]++<<endl;
    // cout<<test[0]++<<endl;
    return 0;
}