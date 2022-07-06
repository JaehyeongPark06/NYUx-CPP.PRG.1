#include <iostream>
using namespace std;

int main(){
  int num1;
  int num2;
  int num3;
  int num4;
  int odds = 0;
  int evens = 0;

  cout << "Please enter 4 positive integers, separated by a space: " << endl;
  cin >> num1 >> num2 >> num3 >> num4;
  
    if ((num1 % 2) == 0) ++evens; else ++odds;
    if ((num2 % 2) == 0) ++evens; else ++odds;
    if ((num3 % 2) == 0) ++evens; else ++odds;
    if ((num4 % 2) == 0) ++evens; else ++odds;
  
    if (evens > odds) cout << "more evens\n";
    if (odds > evens) cout << "more odds\n";
    if (odds == evens) cout << "same number of evens and odds\n";
    return 0;
}
