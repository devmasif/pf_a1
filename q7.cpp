//Muhammad Asif
//23I-0648
//CS-G
//Assignment # 1
//Question # 7

#include<iostream>
#include<bitset>
using namespace std;
int main(){

    //Declare variable
    unsigned int n;
    
    //Ask the user to enter a 16-bit integer
    cout<<"Enter any non-zero (16-bit) integer: "<<endl; 
    cin>>n;
    cout<<"\n";
    
    //Printing 16-bit binary number
    cout<<"Binary code of "<<n<<" is : "<<bitset<16>(n)<<"\n\n";
    
    //Printing gray code of entered binary number (by taking XOR between Entered number and right shift by 1 of the same number)
    cout<<"Gray code of "<<n<<" is : "<<bitset<16>(n^(n>>1))<<"\n\n"; //
	
    return 0;      
}
