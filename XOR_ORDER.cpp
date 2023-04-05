//https://www.codechef.com/START83D/problems/XOR_ORDER
#include<iostream>
using namespace std;

int main(){
    int tc;
    cin >> tc;

    for(int i = 0; i < tc; i++){
        int A, B, C;
        cin >> A >> B >> C;

        int SUM = A+B+C;
        bool isRes = false;
        for(int k = 1;k <= SUM; k++){
            if((A ^ k) < (B ^ k) < (C ^ k))
                {
                    cout << k << endl;
                    isRes = true;
                    break;
                }
        }
        if(isRes != true)
            cout << "-1" << endl;
    }

}