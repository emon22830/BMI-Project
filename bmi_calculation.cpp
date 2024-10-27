#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    double weight, height;
    cout << "Enter your weight (in kg): ";
    cin >> weight;

    cout << "Enter your height (in meters): ";
    cin >> height;

    // Calculate BMI
    double bmi = weight / (height * height);

    cout << "Your BMI is: " << bmi << endl;

    return 0;
}
