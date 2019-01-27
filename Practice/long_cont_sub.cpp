#include <iostream>
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
	
	int ans=1, count=1;
	bool flag=true;
	
	for(int i=0;i<n; i++)
	{
		flag=true;
		count=1;
		for(int j=i+1; j<n; j++)
		{
			for(int k=i; k<j; k++)
			{
				if(A[j]==A[k])
				{
					flag=false;
					break;
				}
			}
			if(flag)
				count++;
			else
				break;
		}
		if(count>ans)
			ans=count;
	}
	cout<<ans;
	return 0;
}
