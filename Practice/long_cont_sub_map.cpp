#include <bits/stdc++.h>

using namespace std;

int main() 
{
	int n;
	cin>>n;
	int A[n];
	for (int i=0; i<n; i++)
	{
		cin>>A[i];
	}
	map<int,int> mmap;
	
	int ans=0, count=0, ans_pos=0, spos=0;

	for(int i=0;i<n; i++)
	{
		if(mmap.find(A[i])!=mmap.end())
		{
			
			if(mmap[A[i]] < spos)
			{
				mmap[A[i]] = i;
				count++;
			}

			else 
			{
				if(count > ans)
				{
					ans = count;
					ans_pos = spos;
				}

				count-= mmap[A[i]]-spos;
				spos = mmap[A[i]]+1;
				mmap[A[i]] = i;
			}
		}
		else
		{
			mmap[A[i]]=i;
			count++;
		}
	}
	if(count>ans)
		ans=count;
		
	cout<<spos<<" "<<ans;
  
	return 0;
}
