#include <iostream>
using namespace std;

int main(){
    double jupiterYear;
    double earthYear;

    cout << "Input Jupiter Year: ";
    cin >> jupiterYear;

    earthYear = jupiterYear * 12;

    cout << jupiterYear << " Jupiter years is " << earthYear << " Earth Years\n";

    return 0;
}