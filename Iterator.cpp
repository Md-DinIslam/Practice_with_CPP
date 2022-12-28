#include <bits/stdc++.h>
using namespace std;
void printvector(vector<int> &vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << endl;
    }
}
void pair_vector(vector<pair<int,int>> &v_p)
{
    cout<<"Size: "<<v_p.size()<<endl;
    for(int i=0;i<v_p.size();i++)
    {
        cout<<v_p[i].first<<" "<<v_p[i].second<<endl;
    }
}
int main()
{
    /* int N; cin>>N;
    vector<int> v;
    for (int i = 0; i < N; i++)
    {
    int x;
        cin >> x;
        v.push_back(x);
    }
    printvector(v);
    vector<int> :: iterator it = v.begin();
    for(it; it<v.end();it++)
    {
        cout<<(*it)<<" ";
    } */
     int num;
    cin >> num;
    vector<pair<int, int>> v_p;
    for (int i = 0; i < num; i++)
    {
        int x, y;
        cin >> x >> y;
        v_p.push_back({x, y});
    }
    // print_vector(v_p);
    vector<pair<int,int>> :: iterator p_it = v_p.begin();
    for(p_it;p_it != v_p.end();p_it++)
    {
        // cout<<(*p_it).first<<" "<<(*p_it).second<<endl;
        cout<<p_it->first<<" "<<p_it->second<<endl;
    }
        /* int n;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        print_vector(v);
        vector<int>::iterator it = v.begin();
        for (it = v.begin(); it != v.end(); it++)
        {
            cout << (*it) << endl;

        } */
}