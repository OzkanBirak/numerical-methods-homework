#include <iostream>   // For standard input/output operations
#include <cmath>      // For mathematical functions like round() and fabs()
#include <iomanip>    // For output formatting

using namespace std;

// Function to round a number to 5 decimal places
double roundToFiveDecimals(double num) {
    return round(num * 100000) / 100000;
}

// Function to compute the absolute error
double calculateAbsoluteError(double original, double rounded) {
    return fabs(original - rounded);
}

// Function to compute the relative error (percentage)
double calculateRelativeError(double original, double absoluteError) {
    if (original == 0) {
        return 0;  // Prevent division by zero issue
    }
    return (absoluteError / fabs(original)) * 100;
}

int main() {
    double originalNumber, roundedNumber, absoluteError, relativeError;

    // Request user input
    cout << "Enter a number: ";
    cin >> originalNumber;

    // Check if input is valid (i.e., a number)
    if (cin.fail()) {
        cerr << "Invalid input! Please enter a numeric value." << endl;
        return 1;  // Exit with an error code
    }

    // Step 1: Round the number
    roundedNumber = roundToFiveDecimals(originalNumber);

    // Step 2: Compute absolute error
    absoluteError = calculateAbsoluteError(originalNumber, roundedNumber);

    // Step 3: Compute relative error
    relativeError = calculateRelativeError(originalNumber, absoluteError);

    // Step 4: Display results
    cout << fixed << setprecision(5);
    cout << "\n===== Results =====" << endl;
    cout << "Original Number : " << originalNumber << endl;
    cout << "Rounded Number  : " << roundedNumber << endl;
    cout << "Absolute Error  : " << absoluteError << endl;
    cout << "Relative Error  : " << relativeError << " %" << endl;

    return 0;  // Exit successfully
}
