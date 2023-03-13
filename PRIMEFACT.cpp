//https://www.codechef.com/START79D/problems/PRIMEFACT

#include <iostream>
using namespace std;

int smallestDivisor(int n)
{
    // if divisible by 2
    if (n % 2 == 0)
        return 2;
 
    // iterate from 3 to sqrt(n)
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0)
            return i;
    }
 
    return n;
}

int main() {
	int tc;
    cin >> tc;

    for(int i = 0; i < tc; i++){
    int X,Y,newX,seconds = 0;
    cin >> X >> Y;
    newX = X;
    while(newX < Y){
        newX += smallestDivisor(newX);
        seconds++;
    }
    cout << seconds << endl;
    }
	return 0;
}

