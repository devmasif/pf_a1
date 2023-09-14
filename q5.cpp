#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;


int main(){
int d,m,y;
cout<<"Enter a month"<<endl;
cin>>m;
cout<<"Enter a day"<<endl;
cin>>d;
cout<<"Enter any year(only last 2 digits)"<<endl;
cin>>y;
bool result;
result = (d*m==y) && cout<<"magic";
result = (d*m!=y) && cout<<"Not magic";
result =  && cout<<"invalid year";


return 0;
}
