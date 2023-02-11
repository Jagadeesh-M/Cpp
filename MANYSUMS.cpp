//https://www.codechef.com/LP1TO201/problems/MANYSUMS
#include<iostream>
using namespace std;

int main(){
    int tc;
    cin >> tc;

    for(int i = 0; i < tc; i++){
        int X,Y;
        cin >> X >> Y;
        cout << 2*(Y-X)+1 << endl;
    }
    return 0;
}
/*
2,3,4,5,6 => 2 * (6-2) + 1 = 9

2,2 4
2,3 5
2,4 6
2,5 7
2,6 8

3,3 6
3,4 7
3,5 8
3,6 9

4,4 8
4,5 9
4,6 10

5,5 10
5,6 11

6,6 12

(6-2) + 1 + (6-2)
*/