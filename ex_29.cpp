// check armstrong number - sum of cubes equal to number
#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int n, rem, sum = 0, original;

    cout<<"Enter a Number: "<<endl;
    cin>>n;

    original = n;

    while(n > 0) {
        rem = n%10;
        sum = sum + pow(rem, 3);
        n = n/10;
    }

    if (original == sum) {
        cout << original << " " << sum << endl;
        cout << "Armstrong Number" << endl;
    } else {
        cout << original << " " << sum << endl;
        cout << "Not an Armstrong Number" << endl;
    }

    return 0;
}