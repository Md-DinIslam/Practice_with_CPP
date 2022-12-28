#include <bits/stdc++.h>
using namespace std;
void print(map<string, int> &m)
{
    // cout<<m.size()<<endl;
    for (auto &i : m)
    {
        // cout << i.first << " " << i.second << endl;
        cout << i.second << endl;
    }
}
void prints(map<int, string> &m)
{
    // cout<<m.size()<<endl;
    for (auto &i : m)
    {
        cout << i.first << " " << i.second << endl;
    }
}
void VectorPrint(vector<vector<int>> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout<<endl;
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
    int n;
    cin >> n;
    // vector<vector<int>> nums;
    // for (int i = 0; i < n; i++)
    // {
    //     int v_size;
    //     cin >> v_size;
    //     vector<int> temp;
    //     for (int j = 0; j < v_size; j++)
    //     {
    //         int x;
    //         cin >> x;
    //         temp.push_back(x);
    //     }
    //     nums.push_back(temp);
    // }
    // VectorPrint(nums);
    vector <int> numbers;
    for(int i = 0;i<n;i++)
    {
        int x;
        cin>>x;
        numbers.push_back(x);
    }
    sort(numbers.begin(),numbers.end(),greater<int>());
    for(auto &i : numbers)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    // int max_num = *max_element(numbers.begin(),numbers.end());
    // cout<<max_num;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < nums[j].size(); j++)
    //     {
    //         cout<<nums[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // vector<int>temp;
    //     for(int i = 0;i<n;i++){
    //         int x = nums[i];
    //         temp.push_back(x);
    //         for(int j = i+1;j<n;j++)
    //         int x = nums[j];
    //         temp.push_back(x);
    //     }

    // sort(temp.begin(),temp.end(),greater <int> ());
    // sort(nums.begin(), nums.end(), greater<int>());
    // for (int i = 0; i < nums.size(); i++)
    // {
    //     cout << nums[i] << " ";
    // }
    // int sum = 0;
    // int l,r;
    // cin>>l>>r;
    // for(int i = l;i<=r;i++){
    //     sum += temp[i];
    // }
    // cout<<sum;
    return 0;
}