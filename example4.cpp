#include <iostream>
using namespace std;
int discount(int price, string day, string month);
main()
{
    int price;
    string day;
    string month;
    int final;
    cout << "Enter price: ";
    cin >> price;
    cout << "Enter day: ";
    cin >> day;
    cout << "Enter month: ";
    cin >> month;
    final=discount(price, day,  month);
    cout << "Your payable amount: " <<final;

  
}
int discount(int price, string day, string month)
{
   int payable_amount;
   if (day=="sunday" && ( month=="october" || month=="march" || month=="august"))
   { 
     payable_amount=price-(price*10)/100;
   }
   else if(day=="monday" && ( month=="november" || month=="december" ))
   {
     payable_amount=price-(price*5)/100;
   }
   else
   {
     payable_amount=price;
   }
     return payable_amount;
}