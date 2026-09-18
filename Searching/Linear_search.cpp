#include<iostream>
using namespace std;

int linearSearch(int arr[],int sz,int target){
    for(int i=0;i<sz;i++){
        if (arr[i] == target){
            return i; //FOUND
        }
    }
    return -1; //NOT FOUND
}

int main(){
    int arr[]={7,1,4,8,9,4,5};
    int sz=7;
    int target=5;

    cout << linearSearch(arr,sz,target) << endl;
    return 0;
}