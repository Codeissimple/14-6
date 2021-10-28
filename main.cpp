#include <iostream>
#include <iomanip>
#include "Stock.h"
#include "StockPurchase.h"
using namespace std;

int main() {
  int sharesToBuy;

  Stock xuzCompany("XYZ", 9.62);

  cout << setprecision(2) << fixed << showpoint;
  cout << "XYZ Company's trading symbol is "
    << xyzCompany.getSymbol() << endl;
  cout << "The stock is currently $"
    << xyzCompany.getSharePrice()
      << " per share.\n";

    cout << "How many shares do you want to buy? ";
    cin >> sharesToBuy;
    StockPurchase buy(xyzCompany, sharesToBuy);

    cout << "The cost of the transaction is $"
      << buy.getCost() << endl;
    return 0;
} 