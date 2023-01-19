#include <iostream>
using namespace std;
float lowest_price(string time , int kilometer);
main ()
{
  string time;
  int kilometer;
  float final;
  cout << "Enter the time of travel: ";
  cin >> time;
  cout << "Enter kilo_meters: ";
  cin >> kilometer;
  final=lowest_price( time , kilometer);
  cout << final;
}  
float lowest_price(string time , int kilometer)
{
   float taxi_day_rate;
   float taxi_night_rate;
   float bus_rate;
   float train_rate;
   float result;
   taxi_day_rate=0.7+kilometer*0.79;
   taxi_night_rate=0.7+kilometer*0.9;
   bus_rate=kilometer*0.09;
   train_rate=kilometer*0.06;
   if(kilometer<20 && time== "day")
   {
     result=taxi_day_rate;
   }
   if(kilometer<20 && time== "night")
   {
     result=taxi_night_rate;
   }
   if(kilometer> 20 && kilometer< 100)
   {
     result=bus_rate;
   }
   if(kilometer >=100 )
   {
     result=train_rate;
   }
    return result;
} 
