#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;
int main(){
unsigned int a1,N1,N2,N3,D1,D2,D3,True,False;
cout<<"Enter First Number\n";
cin>>N1;
cout<<"Enter Second Number\n";
cin>>N2;
cout<<"Enter Third Number\n";
cin>>N3;
D1=N1%10;
D2=N2%10;
D3=N3%10;
cout<<D1<<endl;
cout<<D2<<endl;
cout<<D3<<endl;
bool result;
result=(D1==D2)||(D2==D3)||(D1==D3);
cout<<boolalpha<<result;
cout<<"\n";

return 0;
}
