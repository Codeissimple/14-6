#ifndef STOCK
#define STOCK
#include <string>
using namespace std;

class STOCK
{
  private:
    string symbol;
    double sharePrice;
  public:
    Stock()
      {set("", 0.0);}
      // Constructor
    Stock(const string sym, double price)
      {set(sym, proce);}

    // Copy Constructor
    Stock(const Stock &obj)
      {set(obj.symbol, obj.sharePrice);}

    // Mutator function
    void set(string sym, double price)
      {symbol=sym;
       sharePrice = price;}

    //Accessor function
    string getSymbol() const
      {return symbol;}
      double getSharePrice() const
        {return sharePrice;}
};
#endif