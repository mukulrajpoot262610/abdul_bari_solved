// Perfect Number - sum of the factor is equal the number
#include <iostream>
using namespace std;

int main() {

    int n, sum=0;

    cout<<"Enter a Number: "<<endl;
    cin>>n;

    for(int i=1; i<n; i++) {
        if (n%i==0) {
            cout << i << endl;
            sum = sum + i;
        }
    }

    if (sum == n) {
        cout << "Perfect Number";
    } else {
        cout << "Not a perfect number";
    }

    return 0;
}