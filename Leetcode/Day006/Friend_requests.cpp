#include <iostream>
using namespace std;

int check(int arr[], int n)
{

  int total=0;
  
  for(int i=0; i<n; i++)
  {
    
    for(int j=0; j<n; j++)
    {
      bool flag=true;
     
      if(i==j)
        continue;
      if(arr[i]>100 && arr[j]<100)
        flag = false;
      else if(arr[i]<arr[j])
        flag = false;
      
      if(flag==true)
      {
        if(arr[j] >= (arr[i]/2+7))
          total++;
      } 
    }
  }
  return total;  
}  

int main() {
	// your code goes here
	int n=0;
	cin>>n;
	int a[n];
	for(int i=0 ;i<n; i++)
	{
		cin>>a[i];
	}
	cout<<check(a,n);
	return 0;
}
