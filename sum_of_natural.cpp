#include <bits/stdc++.h>
using namespace std;

int natural_sum(int n){
    int ans = 0;

    for (int i=0; i<n;i++){
        ans = ans + i;
    }

    return ans;
}

int main() {

    int n;
    cin >> n;

    cout << natural_sum(n) << endl;

}