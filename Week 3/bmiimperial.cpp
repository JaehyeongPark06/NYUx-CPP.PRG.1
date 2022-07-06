#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
  double pounds;
  double inches;
  double kilograms;
  double meters;
  double BMI;

  cout<<"Please enter weight in pounds: "<<endl;
  cin>>pounds;
  cout<<"Please enter height in inches: "<<endl;
  cin>>inches;

  kilograms = (0.453592 * pounds);
  meters = (0.0254 * inches); 
  BMI = (kilograms/(meters*meters));
  printf("%.2f\n", BMI);
  
  return 0;
}