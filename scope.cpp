#include<iostream>
using namespace std;

int x=5;//global variable

int main(){
    int a=6,b=7;//local variable

    cout << (a+b) << endl;
    cout << (x+b) << endl;
    int x=6;//local variable , if both varaiable name are same in local and global then local will be executed.
    cout << (x+b) << endl;

    return 0;
}