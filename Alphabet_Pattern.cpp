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

  char input, alp = 'A';
  cin >> input;
  input = toupper(input);
  for (int i = 0; i < (input - 'A' + 1); i++)
  {
    for (int j = 0; j <= i; j++)
    {
      cout << alp << " ";
      alp++;
    }
    // alp++;
    cout << endl;
  }
  return 0;
}