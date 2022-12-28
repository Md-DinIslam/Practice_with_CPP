/// Sting Frequency using MAP;
#include <bits/stdc++.h>
using namespace std;
void StringFrequency(map<string, int> &sf)

{
    cout << "Size: " << sf.size() << endl;
    for (auto &i : sf)
    {
        cout << i.first << " " << i.second << endl;
    }
}
void NumberFrequency(map<int, int> &nf)
{
    cout << "Size: " << nf.size() << endl;
    for (auto &i : nf)
    {
        cout << i.first << " " << i.second << endl;
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
    map<string, int> str_freq;
    int size1;
    cin >> size1;
    for (int i = 0; i < size1; i++)
    {
        string s;
        cin >> s;
        str_freq[s]++;
    }
    StringFrequency(str_freq);
    map<int, int> num_freq;
    int size2;
    cin >> size2;
    for(int i = 0;i<size2;i++)
    {
        int x;
        cin>>x;
        num_freq[x]++;
    }
    NumberFrequency(num_freq);
    return 0;
}