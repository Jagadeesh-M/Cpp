#include<iostream>
using namespace std;

int main(){
    /*
3
N,S
3 1 > 1
4 4 > 4
2 3 > 1

0,1
0,4
(S-N),N

if(N>=S)
S
else
N - (S-N)
    */
int tc;
cin >> tc;
for(int i=0;i<tc;i++){
    int N,S;
    cin >> N >> S;
    if(N>=S)
    cout << S << endl;
    else
    cout << N - (S-N) << endl;
}
    return 0;
}