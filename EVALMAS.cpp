//https://www.codechef.com/START78D/problems/EVALMAS
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int tc;
    cin >> tc;

    for(int i = 0; i < tc; i++){
       int N, X;
       cin  >> N >> X;
       //X > N + 1 , says when the sum required is more than 1's , then expression is not possible
       if((X > N + 1) || (X < 0 && abs(X) >= N)){
            cout << -1 << endl;
       }
       else{
            if(X > 0){
                for(int j = 1;j < X;j++)
                    cout << "+";
                for(int k = 1;k <= (N - X + 1); k++)
                    cout << "*";                
            }
            else{
                for(int j = 1;j <= abs(X) + 1;j++)
                    cout << "-";
                for(int k = 1;k <= (N + X - 1); k++)
                    cout << "*";
            }
            cout << endl;
       }
    }
    return 0;
}