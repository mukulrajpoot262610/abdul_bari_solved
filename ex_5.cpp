// Simple Intereset
#include <iostream>
using namespace std;

int main() {

    int p, t, r;
    float i;

    cout<<"Enter Principal: "<<endl;
    cin>>p;

    cout<<"Enter Time: "<<endl;
    cin>>t;

    cout<<"Enter Rate: "<<endl;
    cin>>r;

    i = (float)(p*r*t)/(100);

    cout << "Interset: " << i << endl;

    return 0;
}