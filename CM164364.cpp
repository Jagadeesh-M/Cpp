//https://www.codechef.com/LP1TO205/problems/CM164364
/*
5(n) 3(x)
50 50 50 100 100
2(m)

6(n) 3(x)
50 50 100 100 105 105
3(m)

4(n) 3(x)
1 2 1 1
2(m)

find distinct chocolates , this is the maximum number of chocolates i can have m.
see how many chocolates i have to give x.
if(n - m  >= x)
m
else if(n - m < x)
n - x
*/


#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int tc;
    cin >> tc;

    for(int i = 0;i < tc; i++){
        int n, x, m = 1;
        cin >> n >> x;
        int choc[n];
        for(int j = 0;j < n; j++){
            cin >> choc[j];
        }
        sort(choc,choc+n);
        for(int k = 0;k < n; k++){
            if(k > 0 && choc[k] != choc[k - 1])
                m++;
        }
        //cout << "distinct " << m << endl;
        if(n - m  >= x)
            cout << m << endl;
        else if(n - m < x)
            cout << n - x << endl;
    }
    return 0;
}