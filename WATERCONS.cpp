//https://www.codechef.com/problems/WATERCONS
#include<iostream>
using namespace std;

int main(){
    int tc;
    cin >> tc;
    const int w = 2000;
    for(int i = 0; i < tc; i++){
        int N;
        cin >> N;
        if(N >= w)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

    }
    return 0;
}