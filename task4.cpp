#include<iostream>
using namespace std;
main ()
{
  int hours;
  int days;
  int number_0f_workers;
  int days_per;
  int avail_time;
  int time_of_one_worker;
  int total_workers_time;
  int ten_per;
  int output_hours; 
  cout << "Enter the number of needed hours: ";
  cin >> hours;
  cout << "Enter the number of days that firm has: ";
  cin >> days;
  cout << "Enter the number of workers: ";
  cin >> number_0f_workers;
  time_of_one_worker=days*10;
  total_workers_time=time_of_one_worker*number_0f_workers;
  ten_per=(total_workers_time*10)/100;
  avail_time=total_workers_time-ten_per;
  
  if(avail_time>hours)
    {
      output_hours=avail_time-hours;
      cout << "Yes!! " << output_hours << " hours left" << endl;
    }
  if(avail_time<hours)
   {
     output_hours=hours-avail_time;
     cout << "Not enough time! " <<  output_hours << " hours needed." << endl;
   }







}