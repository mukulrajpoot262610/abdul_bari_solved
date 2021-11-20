// Linear Search
#include <iostream>
using namespace std;

int main() {

    int n;

    cout<< "Enter Number: "<< endl;
    cin >> n;

    int A[n];

    for(int i=0; i<n; i++){
        cin>>A[i];
    }

    int key;

    cout << "Enter Number to search: " << endl;
    cin >> key;

    bool check = false;

    for(int j=0; j <n;j++) {
        if (A[j]==key){
            cout << "Index is: " << j;
            check = true;
            break;
        }
    }

    if (check == false) {
        cout << "Not Found" << endl;
    }

}