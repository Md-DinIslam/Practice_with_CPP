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
  char str[100];
  // cin >> str;
  cin.getline(str,100);
  int n = strlen(str);
  cout<<n<<endl;
  // cin>>str;
  for (int i = n-1; i > (n / 2); i--)
  {
    cout << str[i];
  }
  return 0;
}