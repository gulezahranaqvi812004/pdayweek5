#include<iostream>
double pyramid_volume();
using namespace std;

main ()
{
  double result;
  

 result=pyramid_volume();
cout << result;
}
double pyramid_volume()
{
  double length;
  double width;
  double height;
  double volume;
  double final_volume;
  string unit;
  cout << "Enter lenght: ";
  cin >> length;
  cout << "Enter width: ";
  cin >> width;
  cout << "Enter height: ";
  cin >> height;
  cout << "Enter unit: ";
  cin >> unit;

  volume=(length*width*height)/3;
  if(unit=="centimeter")
   {
    final_volume=volume*10000000;
    return final_volume;
   }
  if(unit=="kilometer")
    {
     final_volume=volume/1000000000;
     return final_volume;
    }
  if(unit=="milimeter")
   {
     final_volume=volume*1000000000;
     return final_volume;
   }
return 0;
   
}