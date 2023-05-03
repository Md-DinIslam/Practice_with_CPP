#include <bits/stdc++.h>
using namespace std;
unordered_map<char, int> br_val = {{'[', -1}, {'{', -2}, {'(', -3}, {']', 1}, {'}', 2}, {')', 3}};
string BBM(string s)
{
    stack<char> s_br;
    for (auto i : s)
    {
        if (br_val[i] < 0)
        {
            s_br.push(i);
        }
        else
        {
            if (s_br.empty())
            {
                // cout << "NO" << endl;
                // break;
                return "NO";
            }
            char top = s_br.top();
            s_br.pop();
            if (br_val[top] + br_val[i] != 0)
            {
                // cout << "NO" << endl;
                // break;
                return "NO";
            }
        }
    }
    if (s_br.empty())
    {
        // cout << "YES" << endl;
        return "YES";
    }
    else
    {
        // cout << "NO" << endl;
        return "NO";
    }
}
string BBM_Like_Main_Func(string s)
{
    stack<char> s_br;
    for (auto i : s)
    {
        if (br_val[i] < 0)
        {
            s_br.push(i);
        }
        else
        {
            if (s_br.empty())
            {
                cout << "NO" << endl;
                break;
                // return "NO";
            }
            char top = s_br.top();
            s_br.pop();
            if (br_val[top] + br_val[i] != 0)
            {
                cout << "NO" << endl;
                break;
                // return "NO";
            }
        }
    }
    if (s_br.empty())
    {
        cout << "YES" << endl;
        // return "YES";
        // break;
    }
    else
    {
        cout << "NO" << endl;
        // return "NO";
        // break;
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
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << BBM(s) << endl;
        // BBM_Like_Main_Func(s);
    }
    return 0;
}