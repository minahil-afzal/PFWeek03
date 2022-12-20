#include <iostream>
using namespace std;
main()
{
string name;
float matric,intermediate,ecat,aggregate,input1,input2,input3;

cout<<"enter your name"<<endl;
cin>>name;

cout<<"enter marks of ecat"<<endl;
cin>>input1;
ecat=(input1/400)*50;
cout<<"enter marks of intermediate"<<endl;
cin>>input2;
intermediate=(input2/550)*40;
cout<<"enter marks of matric"<<endl;
cin>>input3;
matric=(input3/1100)*10;
aggregate=matric+ecat+intermediate;
cout<<"aggregate is"<<aggregate<<endl;
}
