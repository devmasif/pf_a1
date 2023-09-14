#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;


int main(){
int g;
float g1,g2,g3,g4; 
cout<<" Enter the number of gallons \n ";
cin>>g;

cout<<fixed<<setprecision(2);


bool a1;
g1 = g*0.45;
a1 = g<=100 && cout<<" Bill for "<<g<<" gallons is "<<g1+(14.0/100*g1)<<"$ \n";

bool a2;
g2 = (45)+((g-100)*(0.85));
g2 = g>100&&g<=350 && cout<<" Bill for "<<g<<" gallons is "<<g2+(14.0/100*g2)<<"$ \n";

bool a3;
g3 = (257.5)+((g-350)*(1.45));
a3 = g>350&&g<=600 && cout<<" Bill for "<<g<<" gallons is "<<g3+(14.0/100*g3)<<"$ \n";

bool a4;
g4 = 620+((g-600)*(2.6));
a4 = g>600 && cout<<" Bill for "<<g<<" gallons is "<<g4+(14.0/100*g4)<<"$ \n";














/*g2>45&&g2<=257.5;
g3>257.5&&g3<=600;
g4>600;*/








return 0;
}    
