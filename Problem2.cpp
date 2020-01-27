// Problem 2

#include <iostream>

using namespace std;

int main (int argc, char** argv) {

  int maxCap, attendance;
  string mess;

  cout << "Enter room's max capacity: ";
  cin >> maxCap;

  cout << "Enter event's attendance: ";
  cin >> attendance;

  if (attendance <= maxCap) {
    cout << "All good to go, no fire regulations breached. In fact, you can fit another " << maxCap-attendance << " people in there." << endl;
  } else {
    cout << "Fire regulation breached; eject " << attendance-maxCap << " people to be legal." << endl;
  }

}
