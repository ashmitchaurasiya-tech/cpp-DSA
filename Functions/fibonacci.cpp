#include<iostream>
using namespace std;

int fibonacci(int num){
    int a=0,b=1;
    int c;
    for(int i=1;i<num;i++){
        c=a+b;
        a=b;
        b=c;
    }
    return b;
}

int main(){
    cout << fibonacci(0) << endl;
    cout << fibonacci(1) << endl;
    cout << fibonacci(2) << endl;
    cout << fibonacci(3) << endl;
    cout << fibonacci(4) << endl;
    cout << fibonacci(5) << endl;
    cout << fibonacci(6) << endl;
    cout << fibonacci(7) << endl;
    cout << fibonacci(8) << endl;
    cout << fibonacci(9) << endl;
    
    int n;
    cout << "Enter a num :- ";
    cin >> n;
    cout << fibonacci(n) << endl;

    return 0;
}