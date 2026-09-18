#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number to which sum up: ";
    cin >> n;

    int sum=0;

    for(int i=1;i<=n;i++){
        if(i%2!=0){
            sum=sum+i;
        }
    }
    cout << "total sum of the odd number is:" << sum << endl;
    return 0;
}