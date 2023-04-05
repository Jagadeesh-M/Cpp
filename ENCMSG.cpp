//https://www.codechef.com/problems/ENCMSG
#include<iostream>
using namespace std;

int main(){
    int tc;
    cin >> tc;

    for(int i = 0; i < tc; i++){
        int N;
        cin >> N;

        char str[N];
        cin >> str;
        
        char ph;
        for(int j = 0; j < N - 1; j = j + 2){
            ph = str[j];
            str[j] = str[j + 1];
            str[j + 1] = ph;
        }
        for(int k = 0; k < N; k++)
           str[k] = 'z' - str[k] + 'a';

        cout << str << endl;
    }

    return 0;
}