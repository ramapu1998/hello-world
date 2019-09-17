#include<iostream>
using namespace std;
int main()
{
	int i,t;
	long d;
	cin>>t;
	while(t--)
	{
		cin>>d;
		char s[d];
		int c=0,f=0;double a;
		for(i=0;i<d;i++)
		{
			cin>>s[i];
			if(s[i]=='P')
				c++;
		}
		a=(double)c/(double)d;
		if(a>=0.75)
		{
			cout<<"0"<<endl;
			continue;
		}
		int fl=0;
		for(i=2;i<d-2;i++)
		{
			if((s[i-2]=='P'||s[i-1]=='P') && (s[i+1]=='P'||s[i+2]=='P') && s[i]=='A')
			{
				f++;c++;
				a=(double)c/(double)d;
				if(a>=0.75)
				{
					fl=1;
					break;
				}
			}
		}
			if(fl==1)
				cout<<f<<"\n";
			else
				cout<<"-1\n";
	
	}
	return 0;
}
