#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t,n;
    cin>>t;
    while(t--)
        int a[n], c=0;
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        sort(a,a+n);
        for(int i=1; i<n; i++){
            if(a[i]-a[i-1]>1){
                c=1;
                cout<<"NO"<<endl;
                break;
            }
        }
        if(c==0){
            cout<<"YES"<<endl;
        }


}
