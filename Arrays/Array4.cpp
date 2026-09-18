#include<iostream>
using namespace std;

void SumProductArr(int arr[],int size,int &sum,int &product){
    sum=0;
    product=1;

    for(int i=0;i<size;i++){
        sum = sum + arr[i];
        product = product * arr[i];
    }
}

int main(){
    int arr[]={1,4,5,7,9};
    int size=5;
    int jod,guna;

    SumProductArr(arr,size,jod,guna);
    cout << "Sum=" << jod << endl;
    cout << "Product=" << guna << endl;

    return 0;
}