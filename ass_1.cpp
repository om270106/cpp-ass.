#include<iostream>
#include<string>
using namespace std;

class Car {
public:
string brand;
string model;
int year;
};

int main() {
// Create an object of Car
Car carObj1;
carObj1.brand = "Mahindra";
carObj1.model = " Thar ";
carObj1.year =  2021;

// Create another object of Car
Car carObj2;
carObj2.brand = "Mercedes ";
carObj2.model = "GLS 220D ";
carObj2.year =  2003 ;
  
  //print attribute values
  
  cout<<carObj1.brand<<""<<carObj1.model<<""<<carObj1.year<<endl;
  cout<<carObj2.brand<<""<<carObj2.model<<""<<carObj2.year<<endl;
  
  return 0;
}
