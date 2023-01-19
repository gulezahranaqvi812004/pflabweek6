#include <iostream>
using namespace std;
int is_greator(int number1 ,int number2 ,int number3);
main ()
{
   int number1;
   int number2;
   int number3;
   int result;
   cout << "Enter first number:";
   cin >> number1;
   cout << "Enter second number:";
   cin >> number2;
   cout << "Enter third number:";
   cin >> number3;
   result=is_greator(number1,number2,number3);
   cout << "Greatest number is " << result;
}
int is_greator(int number1 ,int number2 ,int number3)
{
  int greatest;
  if(number1>number2 && number1>number3)
   {
    greatest= number1;
   }
   else if(number2>number1 && number2>number3)
   {
    greatest= number2;
   } 
  else if(number3>number1 && number3>number2)
  {
    greatest= number3;
  }
  else
  {
    greatest=number3;
  }
    return greatest;
  

}