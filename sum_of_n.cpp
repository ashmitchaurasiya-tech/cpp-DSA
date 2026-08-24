#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number to sum up:";
    cin >> n;

    int sum=0;

    for(int i=1;i<=n;i++){
         (sum = sum + i);
    }
    cout << "The total sum up of the number is: " << sum << endl;
    return 0;
}