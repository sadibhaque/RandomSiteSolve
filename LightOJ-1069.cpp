#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {
    ll t,sum=0;
    cin>>t;

    for(ll i=0;i<t;i++){
        ll x,y;
        cin>>x>>y;

        ll a = 19;

        ll diff = abs(x-y);

        sum = (((x-1)+1) * 4) + (diff*4) + 19;

        cout<<"Case "<<i+1<<": "<<sum<<endl;
    }
    return 0;
}