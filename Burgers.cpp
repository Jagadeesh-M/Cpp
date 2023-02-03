#include <iostream>
using namespace std;

int main() {
    int testCases;
    cin >> testCases;
    for(int i = 0; i < testCases; i++){
        int patties, buns;
        cin >> patties >> buns;
        if(patties < buns)
            cout << patties << endl;
        else
            cout << buns << endl;
    }
	return 0;
}
