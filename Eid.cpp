#include <iostream>
#include<algorithm>
using namespace std;
int main() 
{
    int x;
    cin>>x;
    while(x--)
    {
        int a[3],m[3],n=0;
        for(int i=0;i<3;i++)
            cin>>a[i];
        for(int i=0;i<3;i++)
            cin>>m[i];
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                if(i!=j)
                    if(a[i]<a[j] && m[i]>=m[j])
                        n=1;
                    if(a[i]==a[j] && m[i]!=m[j])
                        n=1;
                    if(a[i]>a[j] && m[i]<=m[j])
                        n=1;
            } 
            if(n==1)
                break;
        }
        if(n==1)
            cout<<"NOT FAIR"<<endl;
        else
            cout<<"FAIR"<<endl;
    }
    return 0;
}
