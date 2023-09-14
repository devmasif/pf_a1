#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
//green=1,6,7,12,17,20,28,33
//red=2,11,13,18,19,24,29,32
//blue=3,10,14,23,25,30,31,36
//orange=4,19,15,22,26,35
//grey=5,8,16,21,27,34
int n1=1,n2=2,n3=3,n4=4,n5=5,n6=6,n7=7,n8=8,n9=9,n10=10,n11=11,n12=12,n13=13,n14=14,n15=15,n16=16,n17=17,n18=18,
n19=19,n20=20,n21=21,n22=22,n23=23,n24=24,n25=25,n26=26,n27=27,n28=28,n29=29,n30=30,n31=31,n32=32,n33=33,n34=34,n35=35,n36=36;

int first_num,second_num;

cout <<"Enter two numbers within grid range (1-36):  "<<endl;
cin>>first_num;

cin>>second_num;

((first_num == n1 || first_num == n6 || first_num == n7 || first_num == n12 || first_num == n17 || first_num == n20 || first_num==n28 || first_num==n33)
&&
(second_num == n1 || second_num == n6 || second_num == n7 || second_num == n12 || second_num == n17 || second_num == n20 || second_num==n28 || second_num==n33))

? cout<<"Same Colour: Green\n" : 

((first_num == n2 || first_num == n11 || first_num == n13 || first_num == n18 || first_num == n19 || first_num == n24 || first_num==n29 || first_num==n32)  
&&
(second_num == n2 || second_num == n11 || second_num == n13 || second_num == n18 || second_num == n19 || second_num == n24 || second_num==n29 || second_num==n32))

? cout << "Same Colour: Red\n" : 

((first_num == n3 || first_num == n10 || first_num == n14 || first_num == n23 || first_num == n25 | first_num == n30 || first_num==n31 || first_num==n36)  
&&
(second_num == n3 || second_num == n10 || second_num == n14 || second_num == n23 || second_num == n25 | second_num == n30 || second_num==n31 || second_num==n36))

? cout<<"Same Colour: Blue\n" :

((first_num == n4 || first_num == n9 || first_num == n15 || first_num == n22 || first_num == n26 || first_num == n35 )
&&
(second_num == n4 || second_num == n9 || second_num == n15 || second_num == n22 || second_num == n26 || second_num == n35))

? cout<<"Same Colour: Orange\n" : 

((first_num == n5 || first_num == n8 || first_num == n16 || first_num == n21 || first_num == n27 || first_num == n34 )
&&
(second_num == n5 || second_num == n8 || second_num == n16 || second_num == n21 || second_num == n27 || second_num == n34 ))

? cout << "Same Colour: Grey\n" :

((first_num>36) || (second_num>36) || (first_num<1 ) || (second_num<1))

? cout<<"Invalid input\n":

cout <<"Colors not same\n" ;

return 0;
}


