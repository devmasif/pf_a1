//Muhammad Asif
//23I-0648
//CS-G
//Assignment # 1
//Question # 5

#include<iostream>
using namespace std;


int main(){
//Variable Declaration
int d,m,y;

//Ask the user to enter month, day and year
cout<<"Enter a month"<<endl;
cin>>m;
cout<<"Enter a day"<<endl;
cin>>d;
cout<<"Enter any year(only last 2 digits)"<<endl;
cin>>y;
  
int magic = (d*m==y)&&(y>0)&&(y<=99)&&(d>0)&&(d<=31)&&(m>0)&&(m<=12) && cout<<"Date is Magic\n";

int not_magic = (d*m!=y)&&(y>0)&&(y<=99)&&(d>0)&&(d<=31)&&(m>0)&&(m<=12) && cout<<"Date is not Magic\n";

int invalid_month = ((m<0)||(m>12)) && cout <<"Invalid month\n"; 

int invalid_day = ((d<1)||(d>31)) && cout <<"Invalid day\n";

int invalid_year = ((y<1)||(y>99)) && cout<<"invalid year\n";
 
return 0;
}
