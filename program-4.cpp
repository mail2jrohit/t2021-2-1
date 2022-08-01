#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums;
    int x;
    //Size of array
    cin>>x;

    for(int i = 0;i<x;i++)
    {
        int r;
        cin>>r;
        nums.push_back(r);
    }

    map<int, int> m;
    
    for(int i = 1;i<=9;i++)
    {
        m[i] = 0;
    }
        for(int j = 0;j<nums.size();j++)
        {
            for(int i = 1;i<=9;i++)
            {
                if(nums[j]%i == 0)
                {
                    m[i]++;
                }
            }
        }
    

    auto it = m.begin();
    while(it != m.end())
    {
        if(it->first == 9)
        {
            cout<<it->first<<": "<<it->second;
        }
        else{
        cout<<it->first<<": "<<it->second<<", ";
        }
        
        it++;
    }

    return 0;



}