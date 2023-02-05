//https://www.codechef.com/LP1TO201/problems/CHFSPL
#include <iostream>
using namespace std;

int main(){
    int tc;
    cin >> tc;
    for(int i = 0; i < tc; i++){
        int A, B, C, min_var;
        cin >> A >> B >> C;
        min_var = min(min(A,B),C);
        cout << A+B+C - min_var << endl;
    }
    return 0;
}