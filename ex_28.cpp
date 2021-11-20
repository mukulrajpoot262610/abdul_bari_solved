// Loop to display digits in reverse
#include <iostream>
using namespace std;

int main() {

    int n, rem;

    cout<<"Enter a Number: "<<endl;
    cin>>n;

    while(n > 0) {
        rem = n%10;
        n = n/10;
        cout << rem;
    }

    return 0;
}