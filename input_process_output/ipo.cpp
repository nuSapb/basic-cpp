#include <iostream>

using  namespace std;

int main() {
    // input: weight, heitht
    double w, h;
    cout << "enter weight (kg.) -> ";
    cin >> w;
    cout << "enter height (m.) -> ";
    cin >> h;

    //rocess 
    double bmi = w / (h * h);

    //output
    cout << "BMI = " << bmi << endl;

    return 0;

}