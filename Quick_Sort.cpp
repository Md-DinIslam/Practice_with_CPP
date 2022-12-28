#include <bits/stdc++.h>
using namespace std;
void PrintArray(int *ar, int n)
{
    cout << "\nRandomly Taken Array Elements Are: ";
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }
    cout << endl;
}
void PrintSortedArray(int ar[], int n)
{
    cout << "Sorted Array Elements Are: ";
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }
    cout << endl;
}
int Partition(int ar[], int low, int high)
{
    int temp_sort = ar[low];
    int i = low + 1;
    int j = high;
    do
    {
        while (temp_sort >= ar[i])
            i++;
        while (temp_sort < ar[j])
            j--;
        if (i < j)
        {
            int temp = ar[i];
            ar[i] = ar[j];
            ar[j] = temp;
        }
    } while (i < j);
    int temp = ar[low];
    ar[low] = ar[j];
    ar[j] = temp;
    return j;
}
void QuickSort(int *ar, int low, int high)
{
    if (low < high)
    {
        int temp_high = Partition(ar, low, high);
        QuickSort(ar, low, temp_high - 1);
        QuickSort(ar, temp_high + 1, high);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int size;
    cout << "Enter Array Size: ";
    cin >> size;
    int ar[size];
    srand(time(0));
    for (int i = 0; i < size; i++)
    {
        ar[i] = rand() % 30;
    }
    // for (int i = 0; i < size; i++)
    // {
    //     cin>>ar[i];
    // }
    PrintArray(ar, size);
    QuickSort(ar, 0, size - 1);
    PrintSortedArray(ar, size);
    return 0;
}
