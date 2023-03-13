//https://www.codechef.com/problems/PRIMEREVERSE
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int tc;
    cin >> tc;

    for(int i = 0; i < tc; i++){
        int N;
        string A,B;
        cin >> N;
        cin >> A;
        cin >> B;

        if(count(A.begin(),A.end(),'1') == count(B.begin(),B.end(),'1'))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}