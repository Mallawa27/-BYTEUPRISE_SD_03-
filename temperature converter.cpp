#include <iostream>
#include <iomanip>

using namespace std;

const double METERS_TO_FEET = 3.28084;
const double METERS_TO_KILOMETERS = 0.001;

int main() {
  double value, convertedFeet, convertedKilometers;
  char unit;

  cout << "Enter a length value: ";
  cin >> value;

  cout << "Enter the unit of measurement (m for meters, f for feet, k for kilometers): ";
  cin >> unit;

  switch (unit) {
    case 'm':
      // Convert meters to feet and kilometers
      convertedFeet = value * METERS_TO_FEET;
      convertedKilometers = value * METERS_TO_KILOMETERS;
      cout << setprecision(2) << fixed;  // Set output formatting for precision
      cout << value << " meters is equal to:" << endl;
      cout << convertedFeet << " feet" << endl;
      cout << convertedKilometers << " kilometers" << endl;
      break;
    case 'f':
      // Convert feet to meters and kilometers
      value = value / METERS_TO_FEET;  // Convert feet to meters first
      convertedKilometers = value * METERS_TO_KILOMETERS;
      cout << setprecision(2) << fixed;
      cout << value << " feet is equal to:" << endl;
      cout << value * METERS_TO_FEET << " meters" << endl;  // Convert back to feet for display
      cout << convertedKilometers << " kilometers" << endl;
      break;
    case 'k':
      // Convert kilometers to meters and feet
      value = value / METERS_TO_KILOMETERS;  // Convert kilometers to meters first
      convertedFeet = value * METERS_TO_FEET;
      cout << setprecision(2) << fixed;
      cout << value << " kilometers is equal to:" << endl;
      cout << value * METERS_TO_KILOMETERS << " meters" << endl;  // Convert back to kilometers for display
      cout << convertedFeet << " feet" << endl;
      break;
    default:
      cout << "Invalid unit. Please enter 'm', 'f', or 'k'." << endl;
  }

  return 0;
}
