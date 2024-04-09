#include<bits/stdc++.h>

using namespace std;

int main()
{
 int t;
 cin>>t;
 while(t--){

    int n,b[100000],c=0,r=0;
    cin>>n;
     if(n>=1000){
        r=n%1000;
        b[c++]=n-r;
        n%=1000;

    }

    if(n>=100){
        r=n%100;
        b[c++]=n-r;
        n%=100;

    }


    if(n>=10){
        r=n%10;
        b[c++]=n-r;
        n%=10;
    }
    if(n>0 && n<10){
        b[c++]=n;
    }

    vector<int>v;
    for(int i=0;i<c;i++){
        v.push_back(b[i]);
    }
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
 }

}
