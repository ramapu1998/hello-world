#include<iostream>
using namespace std;
int main()
{
	int a[30],b[30],c[30],n,i,x,t=0;
	cout<<"Enter the no.of students:";
	cin>>n;
	cout<<"Enter the voice no:"<<endl;
	
	for(i=1;i<=n;i++)
	{
		cout<<"Roll No"<<i<<"=";
		a[i]=0;
		b[i]=0;
		cin>>x;
		if(x>0)
		{
			a[i]=1;
			b[i]=x;
		}
	}
	cout<<"Proxy Roll Number:"<<endl;
	for(i=1;i<=n;i++)
	{
		if(a[i]=1)
		{
			if(b[i]!=i)
			  cout<<i<<endl;
			else
			  c[t++]=i;
		}
	}
	cout<<"The Real Attendence:";
	for(i=0;i<t;i++)
	{
		cout<<"\t"<<c[i];
	}
	return 0;
}
