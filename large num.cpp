#include <iostream>
using namespace std;
int main(){
    int p, q, r; `
    cout << "Enter the first integer: ";
    cin >> p;
    cout << "Enter the second integer: ";
    cin >> q;
    cout << "Enter the third integer: ";
    cin >> r;
    if ((p > q) && (p > r)){
        cout << p << " is the greatest number.";
    }
    else if ((q > r) && (q > p)){  
        cout << q << " is the largest number.";
    }
    else{
        cout << r << " is the largest number.";
    }
    return 0;
}