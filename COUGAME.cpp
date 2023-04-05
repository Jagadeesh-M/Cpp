//https://www.codechef.com/START83D/problems/COUGAME
#include<iostream>
using namespace std;

int main(){
    int tc;
    cin >> tc;

    for(int i = 0;i < tc; i++){
        int G, B;
        cin >> G >> B;
        cout << B - G << endl;
    }
    return 0;
}
