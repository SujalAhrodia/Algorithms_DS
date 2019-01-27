#include <iostream>
using namespace std;

//ans + position

int main() 
{
	int n;
	cin>>n;
	int A[n];
	for (int i=0; i<n; i++)
	{
		cin>>A[i];
	}
	
	int ans=1, count=1, ans_pos=0;
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
		{	
			ans=count;
			ans_pos=i;
		}
	}
	cout<<ans_pos<<" "<<ans;
	return 0;
}
