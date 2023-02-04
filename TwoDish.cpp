//https://www.codechef.com/LP1TO201/problems/TWODISH?tab=statement
#include<iostream>
using namespace std;

int main(){
    int tc;
    cin >> tc;
    for(int i = 0;i < tc;i++){
        int N,A,B,C;
        cin >> N >> A >> B >> C;
        if(A+C >= B){
            if(N <= B)
                cout << "YES" << endl;
            else
                cout <<"NO" << endl;
        }
        else
            if(N <= A+C)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
    }

    return 0;

}