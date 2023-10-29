//Muhammad Asif
//23I-0648
//CS-G
//Assignment # 1
//Question # 9 (Ternary only)

#include<iostream>	
#include<cmath>
using namespace std;

int main(){
//Declaring Variables
int a,b,c,d,max_num,second_max_num;
    
//Ask the user to input four number 
cout<<"\n Enter four numbers: "<<endl;
cout<<" ";
cin>>a;
cout<<" ";
cin>>b;
cout<<" ";
cin>>c;
cout<<" ";
cin>>d;
cout<<"\n";

//Finding max number
max_num = (a>=b)&&(a>=c)&&(a>=d) ? a : (b>=c)&&(b>=a)&&(b>=d) ? b  : (c>=a)&&(c>=b)&&(c>=d)  ? c :  d ;

//Finding second max number using max number
second_max_num = (max_num==a)&&(b>=c)&&(b>=d) ? b : (max_num==a)&&(c>=b)&&(c>=d) ? c :(max_num==a)&&(d>=b)&&(d>=b) ? d : 
(max_num==b) && (a>=c)&&(a>=d) ? a : (max_num==b)&&(c>=d)&&(c>=a) ? c : (max_num==b)&&(d>=c)&&(d>=a) ? d : 
(max_num==c)&&(a>=d)&&(a>=b) ? a : (max_num==c)&&(b>=a)&&(b>=d) ? b : (max_num==c)&&(d>=a)&&(d>=b) ? d : 
(max_num==d)&&(a>=c)&&(a>=b) ? a : (max_num==d)&&(b>=a)&&(b>=c) ? b : (max_num==d)&&(c>=a)&&(c>=b) ? c : 0;

//Printing max and second max number 
cout<<" Maximum Number is:  " <<max_num<<endl<<endl;
cout<<" Second Maximum Number is:  "<<second_max_num<<endl;
cout<<"\n";

return 0;
}
