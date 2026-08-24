// A B C D 
// E F G H 
// I J K L 
// M N O P 
// Q R S T 

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a num: ";
    cin >> n;
    char ch='A';

    for(int i=0;i<n;i++){
        for(int j=1;j<=4;j++){
            cout << ch <<" ";
            ch++;
        }
        cout << endl;
    }
    return 0;
}