#include<iostream>
using namespace std;

int decToBinary(int decNum){
    int ans=0, pow=1;

    while(decNum>0){
        int rem=decNum%2;
        decNum=decNum/2;
        ans=ans+(pow*rem);
        pow=pow*10;
    }
    return ans;//binary number
}

int main(){

    cout << decToBinary(8) << endl;

    int n;
    cout << "enter a num: ";
    cin >> n;
    for(int i=0;i<=n;i++){
        cout << decToBinary(i) << endl;
    }

    return 0;
}