// Problem 1

#include <iostream>

using namespace std;

int main (int argc, char** argv) {

  cout << "Input weight (in ounces) of one box of cereal: ";
  double boxWeight;
  cin >> boxWeight;

  double boxTons = boxWeight / 35273.92;
  double boxesForTons = 1.0 / boxTons;
  cout << "Box weight in metric tons: " << boxTons << endl;
  cout << "Boxes needed to weigh a metric ton: " << boxesForTons << endl;

}
