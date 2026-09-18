#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number :";
    cin >> n;

    int sum=0;
    for(int i=1;i<=n;i++){
        if(i%3==0){
            sum=sum+i;
        }
    }
    cout <<"sum=" << sum << endl;
    return 0;
}