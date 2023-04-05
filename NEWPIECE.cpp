//https://www.codechef.com/problems/NEWPIECE
#include<iostream>
using namespace std;

int main(){
    int tc;
    cin >> tc;

    for(int i = 0;i < tc; i++){
        int A,B,P,Q;
        cin >> A >> B >> P >> Q;
        bool abIsEven, pqIsEven;
        abIsEven = (A+B) % 2 == 0 ? true : false;
        pqIsEven = (P+Q) % 2 == 0 ? true : false;

        if(A == P && B == Q)
            cout << 0 << endl;
        else if(abIsEven == pqIsEven)
            cout << 2 << endl;
        else
            cout << 1 << endl;

    }
    return 0;
}