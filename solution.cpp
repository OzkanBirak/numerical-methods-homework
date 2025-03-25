#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double originalNumber, roundedNumber, absoluteError, relativeError;
    
    // Request input from the user
    cout << "Enter a number: ";
    cin >> originalNumber;
    
    // Round to 5 decimal places
    roundedNumber = round(originalNumber * 100000) / 100000;
    
    // Compute absolute error
    absoluteError = fabs(originalNumber - roundedNumber);
    
    // Compute relative error (avoiding division by zero)
    if (originalNumber != 0) {
        relativeError = (absoluteError / fabs(originalNumber)) * 100;
    } else {
        relativeError = 0; // Undefined case, but setting it to 0 for practical purposes
    }
    
    // Display results with formatted output
    cout << fixed << setprecision(2);
    cout << "Rounded Number: " << roundedNumber << endl;
    cout << "Absolute Error: " << absoluteError << endl;
    cout << "Relative Error: " << relativeError << "%" << endl;
    
    return 0;
}