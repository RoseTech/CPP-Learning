//My second program in C++
#include <iostream>

using namespace std;

int main(){
    //Assign value to the Variables:
    int a = 4;
    int b (6);  //Three different initializations of variables.
    int c {a - b};
    //Print our variable 'c':
    cout << c << endl;
    //Print our pre-defined strings using 'cout' from the <iostream> lib:
    cout << "Hello World! " << endl;
    cout << "I'm a C++ Program." << endl;
    //Terminate Program:
   // int foo = 0;
   // auto bar = foo; //sets "bar" to the value of "foo"

   // int foo = 0;
   // decltype(foo) bar; //Sets "foo" to the value of "bar"

    return 0;
}
