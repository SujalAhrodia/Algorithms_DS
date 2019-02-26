#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int find(char* A, char* B, int n1, int n2)
{
	int ans=0;
	int table[n1][n2];
	
	for(int i=0; i<n1; i++)
	{
		for (int j=0; j<n2; j++)
		{
			if(i==0 || j==0)
				table[i][j]=0;
			else if(A[i-1] == B[j-1])
			{
				table[i][j] = table[i-1][j-1]+1;
				ans=max(ans, table[i][j]);
			}
			else
				table[i][j]=0;
		}
	}
	return ans;
}
int main() {
	char A[]="abcdddaa";
	char B[]="abcdddbb";
	
	int n1=strlen(A), n2=strlen(B);
	cout<<find(A,B,n1,n2);
	return 0;
}
