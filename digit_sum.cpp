#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, digit_sum=0;
        cin>>n;
        while(n>0){
            int last_digit = n%10;
            digit_sum = digit_sum + last_digit;
            n=n/10;
        }
        cout<<digit_sum <<endl;

    }
}
