#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x;

    string a,b;

    cin>>n;

    for (int i = 0; i < n; i++) {

        int n1,n2,n3,n4;

        scanf("%d.%d.%d.%d",&n1,&n2,&n3,&n4);


        n1 = stoi(bitset<32>(n1).to_string());
        n2 = stoi(bitset<32>(n2).to_string());
        n3 = stoi(bitset<32>(n3).to_string());
        n4 = stoi(bitset<32>(n4).to_string());

        int n5,n6,n7,n8;

        scanf("%d.%d.%d.%d",&n5,&n6,&n7,&n8);


        if (n1 == n5 && n2 == n6 && n3 == n7 && n4 == n8) {
            cout << "Case " << i+1 << ": Yes" << endl;
        } else {
            cout << "Case " << i+1 << ": No" << endl;
        }        
        
    }

    return 0;
}

