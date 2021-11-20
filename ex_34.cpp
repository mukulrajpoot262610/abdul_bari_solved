// Array Max Element
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;

    cout<<"Enter a Number: "<<endl;
    cin>>n;

    int A[n];


    for(int i=0; i < n; i++) {
        cin >> A[i];
    }

    int max=A[0];

    for (int j=0; j<n;j++){
        if (A[j] > max){
            max = A[j];
        }
    }

    cout << "Maximum:" << max << endl;

    return 0;
}