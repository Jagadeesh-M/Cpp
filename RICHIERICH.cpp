#include <iostream>
using namespace std;

int main(){
    int testCases,A,B,X;
    cin >> testCases;
    for(int i = 0; i < testCases; i++){
        cin >> A >> B >> X;
        cout << (B-A)/X << endl;
    }
    return 0;
}
