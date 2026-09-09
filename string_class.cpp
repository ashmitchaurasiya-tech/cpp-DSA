#include<iostream>
#include<string>
using namespace std;

int main(){

    string str= "hello ashmit";//dynamic in nature
    cout << str << endl;

    //resize
    str= "ash";
    cout << str << endl;

    string str1= "HI";
    string str2= str +str1;//concatination
    cout << str2 <<endl;
    cout << str1.length() <<endl;
    return 0;
}