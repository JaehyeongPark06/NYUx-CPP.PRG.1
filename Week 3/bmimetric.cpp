#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
  float weight;
  float height;
  float BMI;

  cout<<"Please enter weight in kilograms: "<<endl;
  cin>>weight;
  cout<<"Please enter height in meters: "<<endl;
  cin>>height;

  BMI = (weight/(height*height));
  printf("%.2f\n", BMI);
  
  return 0;
}