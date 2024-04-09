#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s,p,q,r;
    cin>>s>>p;
    for (int i=0;i<s.size();i++){

        q[i]=toupper(s[i]);
        r[i]=toupper(p[i]);
    }
         if(s==p)
        {
            cout<<"0"<<endl;;
        }
        else
        {
            for(int i=0; i<s.size();i++){
                if(q[i]<r[i]){
                    cout<<"-1"<<endl;
                    break;
                }
                else if(q[i]>r[i]){
                    cout<<"1"<<endl;
                }
            }
        }

    return 0;
}


