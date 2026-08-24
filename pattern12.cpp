// A 
// B A 
// C B A 
// D C B A 
// E D C B A 

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a num: ";
    cin >> n;
    

    for(int i=0;i<n;i++){
        char ch='A'+i;
        for(int j=0;j<=i;j++){
            cout << ch << " " ;
            ch--;
        }
    cout << endl;
    }
    return 0;
}