#include<iostream>
using namespace std;
void tax_calculator(string vehicle_type , float price);
main ()
{
string vehicle_type;
char vehicle_code;
float price;
float tax_amount;
float tax_rate;
float final_price;
cout << "Enter the type of vehicle: " ;
cin >> vehicle_type;
cout << "Enter code of vehicle: ";
cin >> vehicle_code;
cout << "Enter price of vehicle: ";
cin >> price;
    tax_calculator( vehicle_type , price);
}
void tax_calculator(string vehicle_type , float price)
{
    char vehicle_code;
    float tax_amount;
    float tax_rate;
    float final_price;

if(vehicle_code=='m')
{
    tax_amount=(price*6)/100;
    final_price=price+tax_amount;
    cout << "The final price of vehicle of type " << vehicle_type << "after adding tax is "<< final_price ;
}
if(vehicle_code=='e')
{
    tax_amount=(price*8)/100;
    final_price=price+tax_amount;
    cout << "The final price of vehicle of type " << vehicle_type << "after adding tax is "<< final_price ;
}
if(vehicle_code=='s')
{
    tax_amount=(price*10)/100;
    final_price=price+tax_amount;
    cout << "The final price of vehicle of type " << vehicle_type << "after adding tax is "<< final_price ;
}
if(vehicle_code=='v')
{
    tax_amount=(price*12)/100;
    final_price=price+tax_amount;
    cout << "The final price of vehicle of type " << vehicle_type << "after adding tax is "<< final_price ;
}
if(vehicle_code=='t')
{
    tax_amount=(price*15)/100;
    final_price=price+tax_amount;
    cout << "The final price of vehicle of type " << vehicle_type << "after adding tax is "<< final_price ;
}

}