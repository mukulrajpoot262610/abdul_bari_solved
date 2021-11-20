// check Palindrome number
#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int n, rem, original, reverse = 0;

    cout<<"Enter a Number: "<<endl;
    cin>>n;

    original = n;

    while(n > 0) {
        rem = n%10;
        n = n/10;
        reverse = reverse * 10 + rem;
    }

    if (original == reverse) {
        cout << original << " " << reverse << endl;
        cout << "Palindrome Number" << endl;
    } else {
        cout << original << " " << reverse << endl;
        cout << "Not an palinadrome Number" << endl;
    }

    return 0;
}