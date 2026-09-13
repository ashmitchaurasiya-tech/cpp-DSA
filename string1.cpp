#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char str[] = {'a','b','c','\0'};
    char str1[] = "Hello";//string literals

    cout << str << endl;//constant parameters
    cout << str1[0] << endl;
    cout << str1[1] << endl;
    cout << str1[2] << endl;
    cout << str1[3] << endl;
    cout << str1[4] << endl;
    cout << str1[5] << endl;
}