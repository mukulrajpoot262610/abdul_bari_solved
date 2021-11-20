// formula of quadratic eqn
#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int a,b,c,roots1, roots2;

    cout<<"Enter two Number: "<<endl;
    cin>>a>>b>>c;

    roots1 = (-b + sqrt((b*b)-(4*a*c)))/(2*a);
    roots2 = (-b - sqrt((b*b)-(4*a*c)))/(2*a);

    cout << "Root1: " << roots1 << endl;
    cout << "Root2: " << roots2 << endl;

    return 0;
}