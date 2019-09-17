#include<stdio.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long a[n],sum=0;
        for(int i=0;i<n;i++){
            cin >> a[i];
            sum+=a[i];
        }
        double x=(double)sum/n;
        double y=sum-(x*(n-1));
        bool flag=false;
        int i;
        for(i=0;i<n;i++){
            if(a[i]==y){
                flag=true;
                break;
            }
        }
        if(flag){
            cout << i+1 << endl;
        }
        else cout << "Impossible" << endl;

    }
}

