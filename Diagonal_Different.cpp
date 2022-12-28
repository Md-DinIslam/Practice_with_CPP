#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, leftdiag = 0, rightdiag = 0;
  int arr[100][100];
  cin>>n;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cin >> arr[i][j];
      if (i == j)
        leftdiag += arr[i][j];
      if(i+j==n-1)
        rightdiag += arr[i][j];
    }
  } cout<<abs(leftdiag - rightdiag)<<endl;
  return 0;
}