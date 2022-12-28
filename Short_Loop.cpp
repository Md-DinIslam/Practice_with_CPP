#include <bits/stdc++.h>
using namespace std;
void shor_loop(vector<int> &v)
{
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    cout << "Before:\n";
    for (auto &value : v)  // short loop
    {
        cout << value << " ";
    }
    for (int &vlu : v)  // short loop
    {
        vlu++;
    }
    cout << "\nAfter:\n";
    for (auto &value : v)  // short loop
    {
        cout << value << " ";
    }
    cout<<endl;
}
void pair_short(vector<pair<int,int>> &s_p)
{
    cout<<"Using Iterator:"<<endl;
    vector<pair<int,int>> :: iterator p_it= s_p.begin(); // <==> auto p_it = s_p.begi();
    for(pair<int,int> &i: s_p) // short loop
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<"Using Short Loop"<<endl;
    for(auto &j : s_p)
    {
        j.first++;j.second++;
        cout<<j.first<<" "<<j.second<<endl;
    }
    for(auto &k : s_p)
    {
        k.first--;k.second--;
    }
}
void auto_iterator(vector<pair<int,int>> &a_i)
{
    cout<<"Using Auto:"<<endl;
    for(auto &p_it : a_i)
    {
        cout<<p_it.first <<" "<<p_it.second <<endl;
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

    vector<int> v;
    shor_loop(v);
    int N; cin>>N;
    vector<pair<int,int>> s_p;
    for(int i=0;i<N;i++)
    {
        int x,y;
        cin>>x>>y;
        s_p.push_back({x,y});
    }
    pair_short(s_p);
    auto_iterator(s_p);
    return 0;
}