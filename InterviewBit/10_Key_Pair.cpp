#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int check(int a[], int n, int T)
{
    unordered_map<int,int> umap;
    
    for(int i=0; i<n; i++)
    {
        int temp=T-a[i];
        
        if(temp>0 && umap.find(temp)!=umap.end())
            return 1;
        // umap[a[i]]=temp;
        umap.insert(make_pair(a[i],temp));
    }
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
        int a[n];
        
        for(int i =0; i<n; i++)
        {
            cin>>a[i];
        }
        int ans=check(a,n,T);
        
        if(ans==1)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
        t--;
    }
	return 0;
}
