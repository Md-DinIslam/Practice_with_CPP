#include <bits/stdc++.h>
using namespace std;
void SetPrint(set<string> &s_str)
{
    cout << "Size: " << s_str.size() << endl;
    for (auto &i : s_str)
        cout << i << endl;
}
void UnSetPrint(unordered_set<string> &u_set)
{
    cout << "Size: " << u_set.size() << endl;
    for (auto &i : u_set)
        cout << i << endl;
}
void MultiSetPrint(multiset<string> &m_set)
{
    cout << "Size: " << m_set.size() << endl;
    for (auto &i : m_set)
        cout << i << endl;
}
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    // set<string> s;
    // int size;
    // cin >> size;
    // for (int i = 0; i < size; i++)
    // {
    //     string str;
    //     cin >> str;
    //     s.insert(str);
    // }
    // SetPrint(s);
    // auto it = s.find("Dinf");
    // if(it != s.end())
    // cout<<(*it)<<endl;
    // else cout<<"Not Found"<<endl;

    /* Unordered Set */
    // unordered_set<string> us_str;
    // int size1;
    // cin >> size1;
    // for (int i = 0; i < size1; i++)
    // {
    //     string ustr;
    //     cin >> ustr;
    //     us_str.insert(ustr);
    // }
    // UnSetPrint(us_str);
    // string f_str;
    // cin >> f_str;
    // auto find = us_str.find(f_str);

    // if (find != us_str.end()) // Erase 1st finding value serial wise...
    // {
    //     us_str.erase(find);
    // }
    // UnSetPrint(us_str);
    /* Multi Set */
    multiset<string> m_set;
    int size2;
    cin >> size2;
    for (int i = 0; i < size2; i++)
    {
        string m_str;
        cin >> m_str;
        m_set.insert(m_str);
    }
    MultiSetPrint(m_set);
    int q;
    cin >> q;
    cout << "Query:" << endl;
    while (q--)
    {
        // string f_str;
        // cin >> f_str;
        // auto find = m_set.find(q_str);
        // if(find != m_set.end())
        // cout<<(*find)<<endl;
        // else cout<<"Not Found"<<endl;
        string f_str;
        cin >> f_str;
        /* / Erasing 1st Finding Value Serial Wise..... */
        auto erase = m_set.find(f_str);
        if (erase != m_set.end())
        {
            m_set.erase(erase);
            cout << "New String:" << endl;
            MultiSetPrint(m_set);
        }
        else
            cout << "No Data Deleted" << endl;
    }
    // Erasing All Same Finding Value....
    m_set.erase("Sajib");
    m_set.erase("Rabbi");
    MultiSetPrint(m_set);
    return 0;
}