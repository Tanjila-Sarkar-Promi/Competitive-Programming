#include<bits/stdc++.h>
using namespace std;
int main(){

    int n ,sum=0;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='+' && s[i+1]=='+'){
                sum++;
            }
            else if (s[i]=='-' && s[i+1]=='-'){
                sum--;
            }
        }
    }
    cout<<sum<<endl;


}
