#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin>>n>>k;
    for(int i =0; i<k; i++){
        if(n%10==0){
            n=n/10;
        }
        else{
            n--;
        }
    }
    cout<<n<<endl;
}

1987
y++;
a=y/1000;
b=y/100%10;
c=y/10%10;
d=y%10;

(a!=b && a!=c && a!=d && b!=a && b!=c && b!=d && c!=d)
