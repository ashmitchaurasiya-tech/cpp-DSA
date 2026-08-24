#include<iostream>
using namespace std;

int main(){
    int a = 10 ,b = 5;

    // arithmatic
    cout << "Sum = " << (a+b) << endl;
    cout << "Difference = " << (a-b) << endl;
    cout << "Product = " << (a*b) << endl;
    cout << "Division = " << (a/b) << endl;
    cout << "Modulo = " << (a%b) << endl;

    // relational
    cout << (3>5) << endl;
    cout << (3>=5) << endl;
    cout << (3<5) << endl;
    cout << (3<=5) << endl;
    cout << (3==5) << endl;
    cout << (3!=5) << endl;
   
   // logical
    cout << (3!=5) || (3==5);
    cout << (3!=5) && (3==5);
    cout << !(3!=5) << endl;

    return 0;

}

// unary operator:-
// increament ++ = a++ - kaam phir update 
//                ++a - update phir kaam
                
// decreament -- = a-- - kaam phir update 
//                --a - update phir kaam