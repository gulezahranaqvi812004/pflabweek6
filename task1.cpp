#include <iostream>
using namespace std;
string title(float age , char gender);
main()
{
  float age;
  char gender;
  string final;
  cout << "Enter your age: ";
  cin >> age;
  cout << "Enter your gender: ";
  cin >> gender;
  final=title(age ,gender);
  cout << final;
}
string title(float age , char gender)
{
  string result;
  if (age>=16 && gender=='m')
  {
    result = "Master";
  }
  else if (age<16 && gender=='m')
  {
    result = "Mr.";
  }
  else if (age>=16 && gender=='f')
  {
    result="Ms.";
  }
  else if (age>16 && gender=='f')
  {
    result="Miss";
  }
  return result;

}