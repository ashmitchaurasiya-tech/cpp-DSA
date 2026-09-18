#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a num : ";
    cin >> n;
    
    if(n>=0){
        cout << "It is a positive number";
    }else{
        cout << "It is a negative number";
    }
    cout << endl;
    return 0;

}