#include<bits/stdc++.h>
using namespace std;
int main(){
    char a[100];
    cin>>a;
    int w;
    cin>>w;
    if(w>2){
       if(w%2==0) {
        cout<<"YES"<<endl;
       }
       else{
        cout<<"NO"<<endl;
       }
    }
    else{
        cout<<"No"<<endl;
    }


}
/*2=1+1
3= 2+1
4=2+2
5=3+2
6=4+2*/
