#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin>>x;
    int k  = 1;
    for(int i = 0;i<x;i++)
    {
        if(i == x-1)
        {
            cout<<k;
        }
        else{
            cout<<k<<", ";
        }
        
        k = k + 2;
    }

    return 0;

}