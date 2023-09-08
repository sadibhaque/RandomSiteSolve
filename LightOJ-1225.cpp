#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {
    ll t;
    cin>>t;

    for (int i = 0; i < t; i++){
        string str1,str2;
        cin>>str1;
        str2 = str1;
        reverse(str2.begin(),str2.end());

        if(str1 == str2) cout<<"Case "<<i+1<<": "<<"Yes\n";
        else cout<<"Case "<<i+1<<": "<<"No\n";
    }
    
    return 0;
}