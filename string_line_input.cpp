#include<iostream>
using namespace std;

int main(){
    char str[12];
    cout << "Enter the string:";
    //cin.getline(str,100);//cin.getline(str,len,delimiter(like space as default case.))
    cin.getline(str,12);
    for (char ch : str){
        cout << ch << " ";
    }
    cout << endl;
    return 0;
    //cout << str << endl;//if you add a space in the str it will ignores the nexts in a line.
}