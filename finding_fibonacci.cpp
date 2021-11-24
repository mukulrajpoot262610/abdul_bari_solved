#include <iostream>
using namespace std;

   string checkfibonacci(int n){
            int a = 0;
            int b = 1;
            if (n==a || n==b) return "Present";
            int c = a+b;
            while(c<=n)
            {
                if(c == n) return "Present";
                a = b;
                b = c;
                c = a + b;
            }
            return "Not present";
        };

int main() {

    int n;

    cout << "Enter the number to find: ";
    cin >> n;

    cout << checkfibonacci(n);
};