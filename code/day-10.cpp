#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int k=0;
    vector<int>a;
    while(n!=0)
    {
        k=n%2;
        a.push_back(k);
        n=n/2;
    }
    int c=0,m=0;
    reverse(a.begin(),a.end());
    for(int i=0;i<a.size();i++)
    {
        if(a[i]==1)
        c++;
        else
        {
            c=0;
        }
        m=max(m,c);
        
    }
    cout<<m;
}
