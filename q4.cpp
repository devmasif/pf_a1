//Muhammad Asif
//23I-0648
//CS-G
//Assignment # 1
//Question # 4

#include<iostream>
#include<iomanip>

using namespace std;
int main(){
    //Variable Declaration
    int N1,N2,N3,N4,N5;
    
    //Ask the user to enter values 
    cout<<"\n Enter the numbers  \n";
    cout<<" N1: ";
    cin>>N1;
    cout<<" N2: ";
    cin>>N2;
    cout<<" N3: ";
    cin>>N3;
    cout<<" N4: ";
    cin>>N4;
    cout<<" N5: ";
    cin>>N5;
    cout<<"\n";
    
    //code
    cout<<" N1: "<<setw(N1)<<setfill('*')<<""<<"\n";
    cout<<" N2: "<<setw(N2)<<setfill('*')<<""<<"\n";
    cout<<" N3: "<<setw(N3)<<setfill('*')<<""<<"\n";
    cout<<" N4: "<<setw(N4)<<setfill('*')<<""<<"\n";
    cout<<" N5: "<<setw(N5)<<setfill('*')<<""<<"\n";

    cout<<"\n";

    return 0;
}
