#include <iostream>

using namespace std;

// Reads in initial price, years, and inflation rate (%/year) and estimates price upon purchase. - Lloyd Black
int main(int argc, char** argv) {

  double currprice;
  cout << "Input current price of item: $";
  cin >> currprice;

  int years;
  cout << "Input number of years until purchase: ";
  cin >> years;

  double inflaterate;
  cout << "Input inflation rate (% per year): ";
  cin >> inflaterate;
  inflaterate *= .01;

  double modprice = currprice;
  for (int i = 0; i < years; ++i) {
    modprice += modprice * inflaterate;
  }

  cout << "Estimated cost after " << years << " years: $" << modprice << endl;

}
