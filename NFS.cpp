//https://www.codechef.com/LP1TO201/problems/NFS
#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int tc;
    cin >> tc;

    for(int i = 0; i < tc; i++){
        float U,V,A,S,v;
        cin >> U >> V >> A >> S;
        v = sqrt(U * U  - (2 * A * S));
        if(v > V)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }
    return 0;
}