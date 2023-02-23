//https://www.codechef.com/START78D/problems/CANDYSTORE
#include<iostream>
using namespace std;

int main(){
    int tc;
    cin >> tc;

    for(int i = 0; i < tc; i++){
        int X,Y;
        cin >> X >> Y;
        if(Y >= X)
            cout << Y << endl;
        else
            cout << (X + (Y-X) * 2) << endl;
            
    }
    return 0;
}