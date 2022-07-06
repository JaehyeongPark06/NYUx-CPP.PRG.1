#include <iostream>
using namespace std;

int main(){
  int dollars;
  int cents;
  int total;
  int quarter;
  int dime;
  int nickel;
  int penny;

  cout<<"Please enter the amount of money to convert"<<endl;
  cout<<"# of dollars: "<<endl;
  cin>>dollars;
  cout<<"# of cents: "<<endl;
  cin>>cents;

  dollars *= 100;
  total = dollars + cents;
  quarter = (total/25);
  dime = (total - (quarter * 25))/10;
  nickel = (total - (quarter * 25) - (dime * 10))/5;
  penny = (total - (quarter * 25) - (dime * 10)-(nickel * 5));

  cout<<"The coins are "<<quarter<<" quarters, "<<dime<<" dimes, "<<nickel<< " nickels and "<<penny<<" pennies."<<endl;
  return 0;
}