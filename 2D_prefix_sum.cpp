/*1<=N<=10^5
1<=a[i][j]<=10^9
1<=Q<=10^5
1<=a,b,c,d<= N*/


#include<bits/stdc++.h>
using namespace std;
const int N=10^5+5;
int ar[N][N];
int main()
{

  int n;
  cin>>n;
  for(int i=1; i<=n; i++){
    for(int j=1; i<=n; i++){
        cin>>ar[i][j];

    }
  }
  int q;
  cin>>q;

  while(q--){
    int a,b,c,d;//a,b  c,d
    cin>>a>>b>>c>>d;
    long long sum=0;
    for(int i=a;i<=c; i++){
        for(int j=b;i<=d; j++){
            sum+=ar[i][j];
        }

      cout<<sum<<endl;
    }


  }
}



