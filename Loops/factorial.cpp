#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter the number :";
    cin >> num;

    int b=1;
    for(int i=num;i>0;i--){
        cout << (b=b*i) << " ";
    }
    cout << "factorial =" << b << endl;
    return 0;
}