#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  int n;
  cin >> n;
  int num = 1;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n - i; j++)
    {
      cout << "    ";
    }
    int k = 0;
    while (k != 2 * i - 1)
    {
      // cout.setf(ios::left);
      cout<<setw(4) << num;
      // num++;
      k++;
    }
    num++;
    cout << endl;
  }
  return 0;
}