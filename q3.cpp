#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;
int main()
{
//Declaring Variables
int c=30,b,p;
float N,i;
//Ask the user to Enter Values
cout<<"Enter the balance(b):  "<<endl;
cin>>b;
cout<<"Enter Monthly Payment(p):  "<<endl;
cin>>p;
cout<<"Enter Yearly Interest Rate(i):  "<<endl;
cin>>i;

//N=-1/c*((ln(1+b/p*(1-(1+i)^c)))/ln(1+i)) ----------------->  eq(1)
//Declaring different parts of equation (1) equal to  different variables(v1,v2,etc...) and then declaring them as numerator,denominator.)
float v1,v2,v3,v4,v5,Numerator,Denominator;
i=i/365;
v1 = (-1.0);
v2 = (1-pow(1+i,c));
v3 = b/p;
v4 = log(1+(v3*v2));
Numerator = v1*v4;
Denominator =(c)*(log(1+i));
//N = Numerator/Denominator is same as eq (1)
N=Numerator/Denominator;

//Display N 
cout<<N<<endl;
//1400,200,0.3 are the test values for b,p and i respectively :) 

return 0;
}
