#include <bits/stdc++.h>
using namespace std;
void printVector(vector<int> &arr)
{
    cout << "Size: " << arr.size() << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " "<<endl;
    }
}
int main()
{
    int N;
    cin >> N;
    vector<int> arr[N];
    for (int i = 0; i < N; i++)
    {
        int n;
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            arr[i].push_back(x);
        }
    }
    for (int i = 0; i < N; i++)
    {
        printVector(arr[i]);
    }
    /* vector<pair<int,int>> p;
    printVector(p);
    int n; cin>>n;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        p.push_back({x,y}); // make_pair or '{}' same...
    }
    swap(p[0],p[n-1]);
    printVector(p); */
    return 0;
}