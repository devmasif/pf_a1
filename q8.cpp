//Muhammad Asif
//23I-0648
//CS-G
//Assignment # 1
//Question # 8

#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
//Variable declaration 
int g;
float a1,a2,a3,a4,a5,a6,g1,g2,g3,g4; 
//Ask the user to enter the gallons needed 
cout<<"\n Enter the number of gallons: ";
cin>>g;

//setting the answer correct to decimal places
cout<<fixed<<setprecision(2);

g1 = g*0.45; 
a1 = g>0&&g<=100 && cout<<"\n Bill for "<<g<<" Gallons is "<<g1+(14.0/100*g1)<<"$ \n\n"; //if g<=100 it'll show output otherwise will move to next condition

g2 = (45)+((g-100)*(0.85));
a2 = g>100&&g<=350 && cout<<"\n Bill for "<<g<<" Gallons is "<<g2+(14.0/100*g2)<<"$ \n\n"; //if 100<g<=350 it will show output otherwise will move to next condition

g3 = (257.5)+((g-350)*(1.45));
a3 = g>350&&g<=600 && cout<<"\n Bill for "<<g<<" Gallons is "<<g3+(14.0/100*g3)<<"$ \n\n"; //if 350<g<=600 it will show output otherwise will move to next /// condition

g4 = 620+((g-600)*(2.6));
a4 = g>600 && cout<<"\n Bill for "<<g<<" Gallons is "<<g4+(14.0/100*g4)<<"$ \n\n"; //if g>600 it will show output otherwise will move to next condition

//If g<=0 output will be an invalid entry
a5 =  g==0  && cout<<"\n Invalid entry : Gallon entered is equal to 0 \n\n";       
a6 = ( g<0 ) && cout<< "\n Invalid entry : Gallons entered("<<g<<") are less than 0 \n\n";                                    

return 0;
}    
