#include <iostream>
using namespace std;
void myFunction(){
    //Function code block
    int localVar =20;

    cout<<"Local variable inside my function is"<<localVar;
}

int main ()
{
    // Invoking /calling the function my function()
    myFunction();

    return 0;
}