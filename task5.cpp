#include <iostream>
using namespace std;
float calc_price(string city, string product , int quantity);
main ()
{
   string city;
   string product;
   int quantity;
   float result;
   cout << "Enter the name of the city: ";
   cin >> city;
   cout << "Enter the name of product: ";
   cin >> product;
   cout << "Enter the quantity of product: ";
   cin >> quantity;
   result=calc_price(city,product,quantity);
   cout << "Your total amount is: "<< result;


}
float calc_price(string city, string product , int quantity)
{
  
  float price;
  if(product == "coffee" && city=="Sofia")
  {
    price=0.5*quantity;
  } 
  if(product == "coffee" && city=="Plodiv")
  {
    price=0.4*quantity;
  } 
   if(product == "coffee" && city=="Varna")
  {
    price=0.45*quantity;
  } 


    if(product == "water" && city=="Sofia")
  {
    price=0.8*quantity;
  } 
    if(product == "water" && city=="Plodiv")
  {
    price=0.7*quantity;
  } 
  if(product == "water" && city=="Varna")
  {
    price=0.7*quantity;
  }

  if(product == "beer" && city=="Sofia")
  {
    price=1.2*quantity;
  }  
  if(product == "beer" && city=="Plodiv")
  {
    price=1.15*quantity;
  } 
  if(product == "beer" && city=="Varna")
  {
    price=1.1*quantity;
  } 

  if(product == "sweets" && city=="Sofia")
  {
    price=1.45*quantity;
  } 
  if(product == "sweets" && city=="Plodiv")
  {
    price=1.3*quantity;
  } 
   if(product == "sweets" && city=="Varna")
  {
    price=1.35*quantity;
  } 

 if(product == "peanuts" && city=="Sofia")
  {
    price=1.6*quantity;
  } 
 if(product == "peanuts" && city=="Plodiv")
  {
    price=1.5*quantity;
  } 
   if(product == "peanuts" && city=="Varna")
  {
    price=1.55*quantity;
  } 
  return price;
}