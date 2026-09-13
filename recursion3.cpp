#include<iostream>
using namespace std;

int SumOfNums(int n){
    if (n==1){
        return 1;
    }

    return n + SumOfNums(n-1);
}

int main(){

    cout << SumOfNums(4);

    return 0;
}