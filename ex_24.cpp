// Factorial

#include <iostream>
using namespace std;

int main() {

    int n, mul=1;

    cout<<"Enter a Number: "<<endl;
    cin>>n;

    for(int i=1; i<=n; i++) {
        mul = mul * i;
    }

    cout << "Factorial: " << mul << endl;

    return 0;
}