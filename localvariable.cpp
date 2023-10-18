#include <iostream>
using namespace std;
int globalVar=20;
void myFunction(){
    //Function code block
    int localVar =20;

    cout<<"Local variable inside my function is"<<localVar;
}

int main ()
{
    
    // Invoking /calling the function my function()
    myFunction();
    //cout<<localVar ;This is not expected to work because 
    cout<<"Global variable value "<<globalVar ;//This is expected to work because 

    return 0;
}