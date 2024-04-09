#include<bits/stdc++.h>
using namespace std;
int main(){
    string s, c;
    cin>>s;
    int l=0, u=0;

    for(int i=0; i<s.size(); i++)
    {
        if(islower(s[i])){
            l++;
        }
        else{
            u++;
        }
    }
    if(u>l){
        for(int i=0; i<s.size(); i++){
            c = toupper(s[i]);
            cout<<c;
        }
    }
    else{
         for(int i=0; i<s.size(); i++){
            c=tolower(s[i]);
            cout<<c;
         }
    }
    return 0;

}
