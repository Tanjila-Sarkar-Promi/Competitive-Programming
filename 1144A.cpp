#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--){
        string s;
        int k=1;
        cin>>s;
        sort(s.begin(), s.end());
        for(int i=1; i<s.size(); i++){
            if(s[i]- s[i-1]!=1){
                k==0;

                break;
            }
        }

        if(k)
            cout<<"YES"<<endl;

        else
             cout<<"NO"<<endl;

    }
}
