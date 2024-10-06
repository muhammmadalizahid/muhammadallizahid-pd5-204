#include<iostream>
using namespace std;
float taxCalculator(char type, float price);
int main()
{ 
   float price;
   char type;
   cout<<"Enter the vehicle type code (M, E, S, V, T): ";
   cin>>type;
   cout<<"Enter the price of the vehicle: $";
   cin>>price;
   float fprice=taxCalculator(type, price);
   cout<<"The final price of a vehicle of type E after adding the tax is $"<<fprice<<".";
}
float taxCalculator(char type, float price)
{
   float taxm, finalp;
   if(type=='M')
     {
       taxm=price*6/100;
       finalp=taxm+price;
       return finalp;
     }  
   else if(type=='E')
     {
       taxm=price*8/100;
       finalp=taxm+price;
       return finalp;
     }  
   else if(type=='S')
     {
       taxm=price*10/100;
       finalp=taxm+price;
       return finalp;
     }  
   else if(type=='V')
     {
       taxm=price*12/100;
       finalp=taxm+price;
       return finalp;
     }  
   else
     {
       taxm=price*15/100;
       finalp=taxm+price;
       return finalp;
     }  

}