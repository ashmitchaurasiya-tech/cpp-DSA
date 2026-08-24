#include<iostream>
using namespace std;

int fact(int n){
      int b=1;
      for(int i=n;i>1;i--){
        b=b*i;
      }
      return b;
}

int main(){
    cout << fact(5) << endl;

    return 0;
}