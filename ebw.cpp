#include <iostream>
using namespace std;

int main() {

for(int i=0; i<6; i++){
    for(int j=0; j<6-i; j++){
        cout<<" ";
    }
    for(int k=0; k>i; k++){
        cout<<"*";

    }
    cout<<endl;
}

}