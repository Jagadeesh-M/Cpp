#include<iostream>
using namespace std;

int main(){
/*
1 2 3 4 5
J 2 3 4 5
J 2 3 4 A
1 J 3 4 A
1 J 3 A 5
1 2 J A 5
*/
int tc;
cin >> tc;
for(int i=0; i< tc; i++){
    int noOfHoops;
    cin >> noOfHoops;
    cout << (noOfHoops / 2) + 1 << endl;
}
    return 0;
}

