#include <iostream>
using namespace std;
int main() {
// Set the rise rate in millimeters per year
double riseRate = 1.5;
// Get the number of years from the userint years;
  cout << "Enter the number of years: ";
  int years;
  cout << "Enter the number of years: ";  
  cin >> years;
  // Calculate the rise in millimeters
  double totalRise = riseRate * years;
  // Display the result
  cout << "In " << years << " years, the ocean level will rise by " << totalRise << " millimeters." << endl;
  
  return 0;
}