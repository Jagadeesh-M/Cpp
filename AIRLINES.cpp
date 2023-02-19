//https://www.codechef.com/START77D/problems/AIRLINES

#include<iostream>

using namespace std;

int main(){
    int tc;
    cin >> tc;

    for(int i = 0;i < tc; i++){
        int X,Y,Z;
        cin >> X >> Y >> Z;

        int capacity = X * 10;
        if(capacity <= Y)
            cout << capacity * Z << endl;
        else
            cout << Y * Z << endl;
    }

    return 0;

}