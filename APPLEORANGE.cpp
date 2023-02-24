//https://www.codechef.com/problems/APPLEORANGE
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
	int tc;
	cin >> tc;
	
	for(int i = 0; i < tc; i++){
	    int N, M;
	    cin >> N >> M;
	    int gcd;

        gcd = INT_MAX;
        while(gcd != 0){
            gcd = N % M;
            N = M;
            M = gcd;
        }
	    cout << N << endl;
	}
	return 0;
}
