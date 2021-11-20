// Prime Number
#include <iostream>
using namespace std;

int main() {

    int n;
    bool check=false;

    cout<<"Enter a Number: "<<endl;
    cin>>n;

    for(int i=2; i<n; i++) {
        if (n%i==0) {
            check = true;
            break;
        }
    }

    if (check == true) {
        cout << "Not a Prime Number" << endl;
    } else {
        cout << "Prime Number" << endl;
    }

    return 0;
}