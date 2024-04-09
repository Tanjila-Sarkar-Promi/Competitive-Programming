#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=1; i<n; i++){
            cin>>a[i];
        }

        sort(a, a+n);
        int x= a[0], c=1;
        for(int i=1; i<n; i++){
            if(a[i]==x){
                c++;
                if(c==3){
                    cout<<a[i]<<endl;
                    break;
                }
            }
            else{
                    x=a[i];
                    c=1;

            }
        }
        if(c<3){
            cout<<-1<<endl;
        }
    }
    return 0;

    mina(a), maxa(a), maxi, maxvalue;
     if(x>maxa){
        maxi= i;
        maxvalue= x;
     }
     if(x<minvalue){
        mini=i;
        minvalue=x;
     }
     if()
     maxi-1;  ni-mini;

     maxa=max(a, a+n)
     if(a[i]=maxa)
        maxa[i]-1
        c++

        else(a[i]==mina)
        (n-1)-min[i]
        c++


}
