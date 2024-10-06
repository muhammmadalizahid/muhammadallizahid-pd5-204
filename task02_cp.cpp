#include<iostream>
#include<iomanip>
using namespace std;
float pyramidVolume(float, float, float, string);
int main()
{
  float l,w,h;
  cout<<"Enter the length of the pyramid (in meters): ";
  cin>>l;
  cout<<"Enter the width of the pyramid (in meters): ";
  cin>>w;
  cout<<"Enter the height of the pyramid (in meters): ";
  cin>>h;
  string unit;
  cout<<"Enter the desired input unit (millimeters, centimeters, meters, kilometers): ";
  cin>>unit;
  double result=pyramidVolume(l,w,h,unit);
  cout<<"The volume of the pyramid is: "<<fixed<<setprecision(6)<<result<<" cubic "<<unit; 
}
float pyramidVolume(float l, float w, float h, string unit)
{
  float volume=(l*w*h)/3;
  float conv=0.0;
  if(unit=="centimeters")
    {
      conv=volume*100;
      return conv;
    }
  else if(unit=="millimeter")
    {
      conv=volume*1000;
      return conv;
    }
  else if(unit=="meters")
    {
      conv=volume;
      return conv;
    }
   else if(unit=="kilometer")
    {
      conv=volume/1000;
      return conv;
    }
}
