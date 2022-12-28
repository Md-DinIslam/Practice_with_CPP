#include <bits/stdc++.h>
using namespace std;
int main()
{
	int arr[5];
	long long sum = 0;
	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
		sum += arr[i];
	}
	int minvalue = arr[0], maxvalue = arr[0];
	for (int i = 1; i < 5; i++)
	{
		minvalue = min(minvalue, arr[i]);
		maxvalue = max(maxvalue, arr[i]);
	}
	cout << sum - maxvalue << " " << sum - minvalue << endl;
	return 0;
}