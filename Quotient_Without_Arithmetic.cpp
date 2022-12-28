#include <bits/stdc++.h>
using namespace std;
int main()
{
   int num1, num2;
  cout << "Enter divisor number: ";
  cin >> num1;
  cout << "Enter dividant number: ";
  cin >> num2;
  int neg_posi = (num1 < 0 && num2 < 0) ? 1 : -1;
  int divisor = abs(num1), divident = abs(num2);
  int count = 0;
  while (divisor >= divident)
  {
    divisor -= divident;
    count++;
  }
  if (num1 > 0 && num2 > 0)
  {
    cout << "Quotient: " << count << endl;
    cout << "Remainder: " << divisor << endl;
  }
  else
  {
    cout << "Quotient: " << count*neg_posi << endl;
    cout << "Remainder: " << divisor << endl;
  }
  // cout<<neg_posi;
  return 0;
}