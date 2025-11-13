#include <iostream>
using namespace std;

int main(){
    double earthWeight;
    double marsWeight;

    int counter;

    for(earthWeight = 1; earthWeight <= 100; earthWeight++){
        marsWeight = earthWeight * 0.38;
        cout << earthWeight << " pounds on earth is " << marsWeight << " pounds on mars\n";
        counter++;

        if(counter == 25){
            cout << "\n";
            counter = 0;
        }
    }

    return 0;


}