#include <iostream>
using namespace std;

int main(){
  int grades1;
  int grades2;
  
  cout << "Please enter 2 grades, seperated by a space: " << endl;
  cin >> grades1 >> grades2;

  if (grades1 < 60 & grades2 < 60)
    cout << "Student Failed:(" << endl;

  else if (grades1 >= 95 & grades2 >= 95)
    cout << "Student Graduated with Honors:)" << endl;

  else
    cout << "Student Graduated!" << endl;
  
  return 0;
}
