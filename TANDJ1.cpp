//https://www.codechef.com/LP1TO201/problems/TANDJ1
#include<iostream>
using namespace std;

int main(){
    int tc;
    cin >> tc;
    for(int i = 0; i < tc; i++){
        int a,b,c,d,k,dist;
        cin >> a >> b >> c >> d >> k;
        dist = abs(c - a) + abs(d - b);
        
        if(dist == k)
            cout << "Yes" << endl;
        else if(dist > k)
            cout << "No" << endl;
        else if(dist < k && ((k - dist) % 2 == 0))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}