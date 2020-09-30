#include <iostream>

using namespace std;

//Calculates and outputs pay info based upon hours worked. - Lloyd Black
int main(int argc, char** argv) {

  const double flatrate = 16.00;
  const double overtime = 24.00;
  float hoursworked;

  cout << "Enter number of hours worked: ";
  cin >> hoursworked;
  if (hoursworked < 0) 
  {
    cout << "You can't work negative hours, generally" << endl;
    return 0;
  }
  cout << "Assuming a 40 hour work week, pay info is as follows:" << endl;
  double grosspay;
  if (hoursworked > 40.0) 
  {
    grosspay = flatrate * 40.0 + (hoursworked - 40.0) * overtime;
  } 
  else 
  {
    grosspay = flatrate * hoursworked;
  }
  cout << "\tGross pay: $" << grosspay << endl;
  double sst = grosspay*.06;
  cout << "\tSocial Security tax: $" << sst << endl;
  double fit = grosspay*.14;
  cout << "\tFederal Income tax: $" << fit << endl;
  double sit = grosspay*.05;
  cout << "\tState Income tax: $" << sit << endl;
  cout << "\tMedical Insurance: $10.00" << endl;
  double netpay = grosspay - sst - fit - sit - 10;
  cout << "\tNet Pay after withholds: $" << netpay << endl;

}
