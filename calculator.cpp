#include<iostream>
using namespace std;
int main() {
 //declare variables
int add,multiply,subtract,divide,firstnumber,secondnumber;
//input numbers
cout<<"enter first number";
cin>>firstnumber;
cout<<"enter second number";
cin>>secondnumber;
//show formulers
multiply=firstnumber*secondnumber;
add=firstnumber +secondnumber;
subtract=firstnumber-secondnumber;
divide=firstnumber/secondnumber;
//Give answers
cout<<"multiplication:"<<multiply;
cout<<"addission:"<<add;
cout<<"subtraction:"<<subtract;
cout<<"division:"<<divide;
return 0;
}

