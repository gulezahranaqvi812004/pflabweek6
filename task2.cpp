#include <iostream>
using namespace std;
string check_speed(float speed );
main()
{
  float speed;
  string final;
  cout << "Enter the speed: ";
  cin >> speed;
  final=check_speed( speed );
  cout << final;

}
string check_speed(float speed )
{
   string result;
  if (speed <=10)
  {
    result= "Slow";
  }
  else if (speed>10 && speed <50)
  {
    result= "Average";
  }
  else if (speed >50 && speed<150)
  {
    result= "Fast";
  }
  else if (speed >150 && speed < 1000)
  {
    result= "Ultra_fast";
  }
  else
  {
    result= "Extremely fast";
  }
  return result;



}