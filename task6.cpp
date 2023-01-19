#include <iostream>
using namespace std;

main()
{
  float budget; 
  string category; 
  int number_of_person;
  float amount;
  float price;
  float calculation;
  float total;
  cout << "Enter the budget you have: ";
  cin >> budget;
  cout << "Enter the category: ";
  cin >> category;
  cout << "Enter the total number of person: ";
  cin >> number_of_person;


  if(number_of_person<=4)
  {
   calculation=(budget*75)/100;
   if(category=="Normal")
     {
      amount=249.99*number_of_person;
      total=amount+calculation;
     }
     else
     {
      amount=499.99*number_of_person;
      total=amount+calculation;
     }
  }



  if(number_of_person>4 && number_of_person<=9)
  {
   calculation=(budget*60)/100;
   if(category=="Normal")
     {
      amount=249.99*number_of_person;
      total=amount+calculation;
     }
     else
     {
      amount=499.99*number_of_person;
      total=amount+calculation;
     }

  }
  if(number_of_person>9 && number_of_person<=24)
  {
   calculation=(budget*50)/100;
   if(category=="Normal")
     {
      amount=249.99*number_of_person;
      total=amount+calculation;
     }
     else
     {
      amount=499.99*number_of_person;
      total=amount+calculation;
     }
  }
   if(number_of_person>24 && number_of_person<=49)
  {
   calculation=(budget*40)/100;
   if(category=="Normal")
     {
      amount=249.99*number_of_person;
      total=amount+calculation;
     }
     else
     {
      amount=499.99*number_of_person;
      total=amount+calculation;
     }
    
  }
 if(number_of_person>49)
  {
  calculation=(budget*25)/100;
   if(category=="Normal")
     {
      amount=249.99*number_of_person;
      total=amount+calculation;
     }
     else
     {
      amount=499.99*number_of_person;
      total=amount+calculation;
     }
  }
   if(total>budget)
   {
    price=total-budget;
    cout << "Not enough money! You need " << price << " QR.";
   }
   else
   {
    price=budget-total;
    cout << "Yes! You have "<< price << " QR left";
   }




  }
 


  






