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
    cout << "Input Size: ";
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    // for sorting array...
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (ar[j] > ar[j + 1])
            {
                int temp = ar[j];
                ar[j] = ar[j + 1];
                ar[j + 1] = temp;
            }
        }
    }
    cout << endl
         << "Sorted Array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }
    cout << endl;
    int search, start = 0, end = n - 1, middle, position = -1;
    cin >> search;
    while (start <= end)
    {
        middle = (start + end) / 2;
        if (ar[middle] == search)
        {
            position = middle;
            break;
        }
        else if (ar[middle] > search)
        {
            end = middle - 1;
        }
        else
        {
            start = middle + 1;
        }
    }
    if (ar[middle] == search)
        cout << "Index: " << position << endl
             << "Positon: " << position + 1;
    else
        cout << "Not Found";
    return 0;
}