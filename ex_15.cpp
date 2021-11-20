// nature of roots

// formula of quadratic eqn
#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int a,b,c,nature;

    cout<<"Enter three Number: "<<endl;
    cin>>a>>b>>c;

    nature = sqrt(b*b - (4*a*c));

    if (nature > 0) {
        cout << "Real and Distinct Roots: "<< endl;
    } else if (nature == 0) {
        cout << "Real and Equal Roots: "<< endl;
    } else {
        cout << "Imaginary Roots "<< endl;
    }

    return 0;
}