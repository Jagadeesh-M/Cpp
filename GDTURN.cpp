//https://www.codechef.com/START78D/problems/GDTURN
#include<iostream>
using namespace std;

int main(){
    int tc;
    cin >> tc;

    for(int i = 0; i < tc; i++){
        int X,Y;
        cin >> X >> Y;
        if(X+Y > 6)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}