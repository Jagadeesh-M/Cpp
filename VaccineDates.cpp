#include<iostream>
using namespace std;

int main(){
    int tc;
    cin >> tc;
    for(int i=0; i < tc; i++){
        int D,L,R;
        cin >> D >> L >> R;
        if(D >= L && D <= R)
        cout << "Take second dose now" << endl;
        else if(D > L && D > R)
        cout << "Too Late" << endl;
        else if (D < L && D < R)
        cout << "Too Early" << endl;
    }
    return 0;
}
