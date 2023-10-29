//Muhammad Asif
//23I-0648
//CS-G
//Assignment # 1
//Question # 2

#include<iostream>
#include<cmath>

using namespace std;
int main(){
//Declaring variables 
 int N1,N2,N3,D1,D2,D3,result1,result2,invalid;

//Ask the user to enter a number 
cout <<  "\n Enter only Positive numbers \n";                              
cout<<"\n Enter First Number : ";
cin>>N1;
cout<<"\n Enter Second Number : ";
cin>>N2;
cout<<"\n Enter Third Number : ";
cin>>N3;

//Using %(mod) to get right most digit 
D1=N1%10;
D2=N2%10;
D3=N3%10;


//When numbers entered are >0 and any 2 of the rightmost digits are equal then output is true  
result1=((D1==D2)||(D2==D3)||(D1==D3))&&((N1>=0)&&(N2>=0)&&(N3>=0)) && cout<<"\n The result is : true" ;

//when numbers entered are >0 and all the rightmost digits are not equal then the output is false 
result2=(D1!=D2)&&(D1!=D3)&&(D2!=D3)&&((N1>=0)&&(N2>=0)&&(N3>=0)) && cout<<"\n The result is : false ";

//when the numbers entered are <0 then the output is an invalid entry (even if 2 of them are equal) 
invalid= ((N1<0)||(N2<0)||(N3<0))  && cout<<"\n The numbers entered are invalid ";

cout<<"\n\n";

return 0;
}
