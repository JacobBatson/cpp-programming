#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int num1,num2,num3,num4,num5;
    int avg;

    cout << "Enter number1: ";
    cin >> num1;

    cout << "Enter number2: ";
    cin >> num2;

    cout << "Enter number3: ";
    cin >> num3;

    cout << "Enter number4: ";
    cin >> num4;

    cout << "Enter number5: ";
    cin >> num5;

    avg = (abs(num1) + abs(num2) + abs(num3) + abs(num4) + abs(num5)) / 5;

    cout << "The average of the absolute values inputted is: " << avg << "\n"; 
}