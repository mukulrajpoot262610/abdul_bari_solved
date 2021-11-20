// Array Sum
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;

    cout<<"Enter a Number: "<<endl;
    cin>>n;

    int A[n];
    int sum=0;


    for(int i=0; i < n; i++) {
        cin >> A[i];
    }

    for (int j=0; j<n;j++){
        sum = sum + A[j];
    }

    cout << sum << endl;

    return 0;
}