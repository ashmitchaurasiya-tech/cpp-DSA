#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the to which sum up: ";
    cin >> n;
    
    int i=1,sum=0;

    while (i<=n){
        if(i%2==0){
            sum=sum+i;
        }
        i++;
    }
    cout << "The total sum up is: " << sum << endl;
    return 0;
    
}