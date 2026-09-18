#include<iostream>
using namespace std;

int main(){
    int nums[]={5,15,24,1,-15,2};
    int size=6;
    int smallest=INT_MAX;//+infinity
    int largest=INT_MIN;//-infinity
    int smallestIndex;
    int largestIndex;

    //smallest
    for(int i=0;i<size;i++){
        if (nums[i]<smallest){
            smallest = nums[i];
            smallestIndex=i;
        }
    }

    cout << "smallest=" << smallest << " at index " << smallestIndex << endl;
    
    //largest
    for(int i=0;i<size;i++){
        if (nums[i]>largest){
            largest = nums[i];
            largestIndex=i;
        }
    }

    cout << "largest=" << largest << " at index " << largestIndex << endl;
}