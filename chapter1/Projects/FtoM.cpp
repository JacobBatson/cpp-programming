#include <iostream>
using namespace std;

int main(){
    double f;
    double m;

    cout << "Enter length in feet: ";
    cin >> f;

    m = f / 3.28;

    cout << f << " feet is " << m << " meters.";

    return 0;
}