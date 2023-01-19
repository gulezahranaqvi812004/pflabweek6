#include <iostream>
using namespace std;
main ()
{
   string name;
   int roll_number;
   cout << "Enter your name: ";
   cin >> name;
   cout << "Enter your roll number:  ";
   cin >> roll_number;
   if(name == "ali" || name=="Ali")
    {
        if(  roll_number==501)
          {
            cout << "Welcome!"<< endl;
          }
    }
   else
    {
     cout << "Try again!";
    }



}