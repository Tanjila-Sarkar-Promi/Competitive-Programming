#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, c=0;
    cin>>n;
    int a[100000];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        if(a[i]!=a[i+1]){
            c++;
        }
    }
    cout<<c<<endl;


}


n
b[n], a[]


a[b[i]]= i+1

cout<<a[i]

1 2 3 4

1 = 2   swap()
2= 3   a[i]= i+1
3=4
4=1

2 3 4 1    // 4 1 2 3
1 2 3 4

