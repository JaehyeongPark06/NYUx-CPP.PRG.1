#include <iostream>
using namespace std;

int main(){ 
  int n; 
  int count;
  int i;
  cout << "Please enter a positive integer: " << endl;
  cin >> n; //take user input 
  i = 1; //take a variable that keeps track of the numbers 
  count = 0; //a counter to count 
  while(count < n){ //iterate till n 
    if(i % 2 == 0){ //check if it's even 
      cout << i << endl; //print it! 
      count++; 
      } 
      i++; 
   }  
} 