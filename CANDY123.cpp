//https://www.codechef.com/problems/CANDY123
#include<iostream>
using namespace std;

int main(){
    int tc;
    cin >> tc;

    for(int i = 0;i < tc; i++){
        int A, B;
        cin >> A >> B;
        int a = 0, b = 0;
        for(int j = 1; j <= 1000; j++){
            if(j == 1)
                a++;
            else
                (j%2 == 0) ? b=b+j : a=a+j;
            //cout << "j:" << j << ";a:" << a << ";b:" << b << endl;
            if(A < a)
                {cout << "Bob" << endl; break;}
            else if(B < b)
                {cout << "Limak" << endl; break;}
        }
    }
    return 0;
}
