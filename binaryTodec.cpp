#include<iostream>
using namespace std;

int binaryToDec(int binNum){
    int ans=0, pow=1;

    while(binNum>0){
        int rem=binNum%10;
        ans=ans+(rem*pow);
        binNum=binNum/10;
        pow=pow*2;
    }
    return ans;//binary number
}

int main(){

    cout << binaryToDec(100) << endl;

    return 0;
}