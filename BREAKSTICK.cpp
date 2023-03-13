//https://www.codechef.com/problems/BREAKSTICK
#include<iostream>
using namespace std;

int main(){

    int tc;
    cin >> tc;

    for(int i = 0; i < tc; i++){
        int N, X;
        cin >> N >> X;

        if((X%2)==0 && (N%2)!=0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}