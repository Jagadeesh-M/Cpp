#include <iostream>
using namespace std;

int main() {
    int testCases;
    cin >> testCases;
    for(int i = 0; i < testCases; i++){
        int rolledNumber;
        cin >> rolledNumber;
        if(rolledNumber == 6)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
	return 0;
}
