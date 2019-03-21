#include <bits/stdc++.h>

using namespace std;

int check(vector<int> a, int T)
{
    int sum=a[0], s=0;
    bool flag=false;
    
    for(int i=1; i<=a.size(); i++)
    {
        while(sum>T && s<i-1)
        {
            sum-=a[s];
            s++;
        }
        if(sum==T)
        {
            flag=true;
            cout<<s+1<<" "<<i<<endl;
            return 1;
        }
        if(i<a.size())
            sum+=a[i];
    }
    if(!flag)
        cout<<"-1"<<endl;
    return 0;
}

int main() 
{
    int t;
    cin>>t;
    
    while(t>0)
    {
        int n,T;
        cin>>n>>T;
        vector<int> a;
        
        int temp;    
        for(int i=0; i<n; i++)
        {
            cin>>temp;
            a.push_back(temp);
        }
        check(a,T);
        
        t--;
    }
	return 0;
}
