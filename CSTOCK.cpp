//https://www.codechef.com/LP1TO201/problems/CSTOCK
#include<iostream>
using namespace std;

int main(){
    int tc;
    cin >> tc;

    for(int i = 0; i < tc;i++){
        float S,A,B,C;
        float currentPrice;
        cin >> S >> A >> B >> C;
        currentPrice = S+(S*C/100);
        if(currentPrice >= A && currentPrice <= B)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}