//Muhammad Asif
//23I-0648
//CS-G
//Assignment # 1
//Question # 6

#include<iostream>
#include<bitset>
using namespace std;
int main(){
//Variable declaration 
unsigned int n,n1,n2,n3;

//Ask the user to enter the value 
cout <<"\n Enter a 32-bit positive number: ";
cin>>n;

//bitset to 8 will print gate 1 ( 8 right-most digits)
cout<<"\n Gate 1 = "<<bitset<8>(n)<<"\n\n";

//right shift n by 8 and set bit set to 8 to get gate 2
n1=(n>>8);
cout<<" Gate 2 = "<<bitset<8>(n1)<<"\n\n";

//right shift n by 16 and set bit set to 8 to get gate 3
n2=(n>>16);
cout<<" Gate 3 = "<<bitset<8>(n2)<<"\n\n";

//right shift n by 24 and set bit set to 8 to get public constant
n3=(n>>24);
cout<<" Public  Constant = "<<bitset<8>(n3)<<"\n\n";

//Key is equal to XOR of gate1,gate2,gate3 and public constant
cout<<" Key = "<<bitset<8>(n^n1^n2^n3)<<"\n\n";



return 0;
}
