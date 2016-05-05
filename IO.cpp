#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main (){
    string myStr;
    float price = 0;
    int quantity = 0;

    cout << "Enter Price: ";
    getline(cin, myStr);
    stringstream(myStr) >> price;
    cout << "Enter Quantity: ";
    getline(cin, myStr);
    stringstream(myStr) >> quantity;
    cout << "Total price: " << price*quantity << endl;

    return 0;
    
}
