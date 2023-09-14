#include<iostream>	
#include<cmath>
#include<iomanip>
using namespace std;


int main(){
int a,b,c,d,max_num,second_max_num;
//Ask the user to input four number 
cout<<"Enter four numbers: "<<endl;
cin>>a;
cin>>b;
cin>>c;
cin>>d;
cout<<"\n";

max_num = (a>=b)&&(a>=c)&&(a>=d) ? a : (b>=c)&&(b>=a)&&(b>=d) ? b  : (c>=a)&&(c>=b)&&(c>=d) 
? c :  d ;

second_max_num = (max_num==a)&&(b>=c)&&(b>=d) ? b : (max_num==a)&&(c>=b)&&(c>=d) ? c :(max_num==a)&&(d>=b)&&(d>=b) ? d : 
(max_num==b) && (a>=c)&&(a>=d) ? a : (max_num==b)&&(c>=d)&&(c>=a) ? c : (max_num==b)&&(d>=c)&&(d>=a) ? d : 
(max_num==c)&&(a>=d)&&(a>=b) ? a : (max_num==c)&&(b>=a)&&(b>=d) ? b : (max_num==c)&&(d>=a)&&(d>=b) ? d : 
(max_num==d)&&(a>=c)&&(a>=b) ? a : (max_num==d)&&(b>=a)&&(b>=c) ? b : (max_num==d)&&(c>=a)&&(c>=b) ? c : 0;


cout<<"Maximum Number is:  " <<max_num<<endl<<endl;
cout<<"Second Maximum Number is:  "<<second_max_num<<endl;


return 0;
}
