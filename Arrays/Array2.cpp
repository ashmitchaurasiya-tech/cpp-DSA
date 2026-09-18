#include<iostream>
using namespace std;

int main(){
    int nums[]={5,15,24,1,-15,24};
    int size=6;
    int smallest=INT_MAX;//+infinity
    int largest=INT_MIN;//-infinity

    //smallest
    for(int i=0;i<size;i++){
        if (nums[i]<smallest){
            smallest = nums[i];
        }
    }

    cout << "smallest=" << smallest << endl;
    
    //largest
    for(int i=0;i<size;i++){
        if (nums[i]>largest){
            largest = nums[i];
        }
    }

    cout << "largest=" << largest << endl;
}