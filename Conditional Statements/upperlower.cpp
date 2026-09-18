#include<iostream>
using namespace std;

int main(){
    char ch;
    cout << "Enter a character:";
    cin >> ch;

    if (ch>=65 && ch<=90){
        cout << "Uppercase\n";
    }else{
        cout << "lowercase\n";
    }
    cout << endl;
    return 0;
}