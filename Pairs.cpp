#include<iostream>
using namespace std;
int main()
{
	int t,i,count=0,even=0,n;
	cin>>t;
	while(t--)
	{
	   cin>>n;
	   int a[n];
	   for(i=0;i<n;i++)
	   {
	   	  cin>>a[i];
	   	  if(a[i]%2!=0)
		  {
			 count=count+even;
		  }
		  else
		  {
			 even++;
		  }
	   }
	   cout<<count<<endl;	
	}
	return 0;
}
