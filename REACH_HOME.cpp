//https://www.codechef.com/START82D/problems/REACH_HOME
#include<iostream>
using namespace std;

int main(){
    int tc;
    cin >> tc;
    const int mileage = 5;
    for(int i = 0; i < tc; i++){
        int X , Y;
        cin >> X >> Y;
        if(X * mileage >= Y)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}