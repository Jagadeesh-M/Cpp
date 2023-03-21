//https://www.codechef.com/START81D/problems/MAXCAP
#include<iostream>
using namespace std;

int main(){
    int tc;
    cin >> tc;

    for(int i = 0;i < tc; i++){
        int X, Y;
        const int nCapacity = 500;
        cin >> X >> Y;

        if(X <= 8 && X * Y <= nCapacity)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}