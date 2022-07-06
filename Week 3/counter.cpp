#include <iostream>
using namespace std;

int main() {    
  int q = 0;
  int d = 0;
  int n = 0;
  int p = 0;
  int dollars = 100;
  int cents; 
  int total;
  
  cout<<"Please enter the number of coins"<<endl;    
  cout<<"# of quarters: ";
  cin>>q;
  cout<<"# of dimes: ";
  cin>>d;
  cout<<"# of nickels: ";
  cin>>n;
  cout<<"# of pennies: ";
  cin>>p;

  total = (q*25)+(d*10)+(n*5)+(p);
  
  cents = total % 100;
  
  dollars = (total-cents)/100;

  cout<<"The total is "<<dollars<<" dollars and "<<cents<<" cents"<<endl;
  
  return 0;  
 }  
