//https://www.codechef.com/START79D/problems/BETDEAL
#include<iostream>
using namespace std;

int main(){
    int tc;
    cin >> tc;

    for(int i = 0; i < tc; i++){
        int S1,S2;
        cin >> S1 >> S2;

        int s1Price,s2Price;
        s1Price = 100 - ((100 * S1) / 100);
        s2Price = 200 - ((200 * S2) / 100);

        if(s1Price == s2Price)
            cout << "BOTH" << endl;
        else if(s1Price < s2Price)
            cout << "FIRST" << endl;
        else if(s1Price > s2Price)
            cout << "SECOND" << endl;
    }
    return 0;

}