#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
int arr[N][N];
long long presum[N][N];
int main()
{
    int size;
    cin >> size;
    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= size; j++)
        {
            cin >> arr[i][j];
            presum[i][j]=presum[i-1][j]+presum[i][j-1]+arr[i][j]-presum[i-1][j-1];
        }
    }
    int q;
    cin >> q;
    while (q--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        long long sum = 0;
        sum= presum[c][d]-presum[a-1][d]-presum[c][b-1]+presum[a-1][b-1];
        cout << sum << endl;
    }
    return 0;
}