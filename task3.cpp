#include <iostream>
using namespace std;
float calc_income(string screen ,int rows , int columns);
main ()
{
   string screen;
   int rows;
   int columns;
   float final;
   cout << "Enter the type of screen: ";
   cin >> screen;
   cout << "Enter the number of rows: ";
   cin >> rows;
   cout << "Enter the number of columns: ";
   cin >> columns;
   final=calc_income(screen ,rows , columns);
   cout << "Income: "<< final;

}
float calc_income(string screen ,int rows , int columns)
{
    float income;
    if(screen== "premiere")
    {
        income=12*rows*columns;
    }
    else if (screen== "normal")
    {
        income=7.5*rows*columns;
    }
    else if (screen=="discount")
    {
         income=5*rows*columns;   
    }
    return income;




}