// Array negative and positive elements
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

    int positive=0, negative=0;

    for (int j = 0; j<n;j++) {
        if (A[j] > 0) {
            positive++;
        } else {
            negative++;
        }
    }

    cout << "Positive: " << positive << endl;
    cout << "Negative: " << negative << endl;

    return 0;
}