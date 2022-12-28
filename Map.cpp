#include <bits/stdc++.h>
using namespace std;
void StringIntPrint(map<string, int> &m)
{
    cout << "Size: " << m.size() << endl;
    for (auto &i : m)
    {
        cout << i.first << " " << i.second << endl;
        // cout << i.first << endl;
    }
    // cout<<endl;
}
void IntStringPrint(map<int, string> &m)
{
    cout << "Size: " << m.size() << endl;
    for (auto &i : m)
    {
        cout << i.first << " " << i.second << endl;
    }
    // cout<<endl;
}
void un_map(unordered_map<string,int> &um)
{
    cout<<"Size: "<<um.size()<<endl;
    for(auto &i : um)
    {
        cout<<i.first<<" "<<i.second<<endl;
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
    // int n;
    // cin >> n;
    // map<int, string> s;
    // // for(int  i =0;i<n;i++)
    // // {

    // // }
    // s[3] = "Din";
    // s[1] = "abc";
    // s[2] = "Liza";
    // // IntStringPrint(s);
    // map<string, int> s2;
    // s2["a"] = 50;
    // s2["b"] = 30;
    // s2["c"] = 20;
    // StringIntPrint(s2);
    // string sum[10];
    // int j = 0;
    // for (auto &i : s2)
    // {
    //     sum[j] = i.first;
    //     j++;
    // }
    // for (int i = 0; i < sum->size(); i++)
    //     cout << sum[i] << endl;
    // auto it = s.find(3);
    // if (it == s.end())
    // {
    //     cout << "Not Found" << endl;
    // }
    // else
    // {
    //     cout << (*it).first << " " << (*it).second << endl;
    // }
    // IntStringPrint(s);
    // // cout << endl;
    // auto find = s.find(2);
    // if (find != s.end())
    // {
    //     s.erase(find);
    // }
    // IntStringPrint(s);
    // s.clear();
    // IntStringPrint(s);
    /*  String Frequency using MAP; */
    // map < string, int> str_freq;
    // int size;
    // cin >> size;
    // for (int i = 0; i < size; i++)
    // {
    //     string sf;
    //     cin >> sf;
    //     str_freq[sf]++;
    // }
    // StringIntPrint(str_freq);

    /* Unordered Map */
    unordered_map<string, int> um;
    int size1;
    cin >> size1;
    // while (size1--)
    for (int i = 0; i < size1; i++)
    {
        string str;
        cin >> str;
        // um[str] = um[str] + 1;
        um[str]++;
    }
    un_map(um);
    int q;
    cin >> q;
    auto it = um.begin();
    while (q--)
    {
        string q_str;
        cin >> q_str;
        cout << um[q_str] << endl;
    }
    return 0;
}