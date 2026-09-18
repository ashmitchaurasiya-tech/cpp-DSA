#include<iostream>
using namespace std;

int main(){
    int marks;
    cout << "enter the marks:";
    cin >> marks;

    if(marks>=90){
        cout << "grade A";
    }else if(marks>=60 && marks<90){
        cout << "grage B";
    }else{
        cout << "grade C";
    }
    cout << endl;
    return 0;
}
