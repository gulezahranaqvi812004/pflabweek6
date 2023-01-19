#include <iostream>
using namespace std;
int calculate(float holidays,float weekend_in_hometown,string year);
main()
{
  float holidays;
  float weekend_in_hometown;
  int  result;
  string  year;
  cout << "Enter the year(Normal or leap): ";
  cin >> year;
  cout << "Enter the holidays: ";
  cin >> holidays;
  cout << "Enter the weekends: ";
  cin >> weekend_in_hometown;
  result=calculate(holidays, weekend_in_hometown, year);
  cout << result;
}
int calculate(float holidays,float weekend_in_hometown,string  year)
{
  float weekend_in_sofia;
  float time_to_play;
  float holiday_play;
  float total_time;
  int result;
  float leap_time;

  weekend_in_sofia=48-weekend_in_hometown;
  time_to_play=weekend_in_sofia*0.75;
  holiday_play=holidays*0.6667;
  total_time=holiday_play+time_to_play+weekend_in_hometown;
   if (year == "Normal")
   {
     result = total_time;
     
   }
   else if (year=="leap")
  {
    leap_time=(total_time*15)/100;
    result=total_time+leap_time;
    
  }
  return result;


}