#include <bits/stdc++.h>
using namespace std;
void printVector(vector<int> &a)
{
    cout << "Size: " << a.size() << endl;
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
void pair_vector(vector<pair<int,int>> &pv)
{
    cout<<"Size: "<<pv.size()<<endl;
    for(int i=0;i<pv.size();i++)
    {
        cout<<pv[i].first<<" "<<pv[i].second<<endl;
    }
}
int main()
{
    int N;
    cin >> N;
    vector<vector<int>> v;
    for (int j = 0; j < N; j++)
    {
        int num;
        cin >> num;
        vector<int> temp;
        for (int i = 0; i < num; i++)
        {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
    for (int k = 0; k < N; k++)
    {
        printVector(v[k]);
    }
    cout << v[3][1];
    /* for(int k=0;k<size;k++)
    {
        printVector(v[k]);
    } */
    int size; cin>>size;
    vector<pair<int,int>> v_p;
    for(int i=0;i<size;i++)
    {
        int x,y;
        cin>>x>>y;
        v_p.push_back({x,y});
    }
    pair_vector(v_p);
    return 0;
}