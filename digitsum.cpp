#include<iostream>
using namespace std;

int sumOfDigit(int num){
    int digSum=0;

    while(num>0){
        int lastDig=num%10;
        num=num/10;
        digSum=digSum+lastDig;
    }
    return digSum;
}

int main(){
    cout << "Sum=" << sumOfDigit(238) << endl;

    return 0;
}