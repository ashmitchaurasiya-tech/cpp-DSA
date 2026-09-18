#include<iostream>
using namespace std;

int main(){
    char garde = 'A'; // conversion or implict
    double price = 100.98; // casting or exlict

    int value = garde , newPrice = (int)price;
    
    cout << value << endl;
    cout << newPrice << endl;
    return 0;
}