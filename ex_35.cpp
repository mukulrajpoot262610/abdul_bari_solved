// Array Min Element
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

    int min=A[0];

    for (int j=0; j<n;j++){
        if (A[j] < min){
            min = A[j];
        }
    }

    cout << "Minimum:" << min << endl;

    return 0;
}