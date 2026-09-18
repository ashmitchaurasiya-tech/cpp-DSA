#include<iostream>
using namespace std;

int num(int n){
      int s=0;
      for(int i=1;i<=n;i++){
        s=s+i;
      }
      return s;
}

int main(){
    cout << num(5) << endl;

    return 0;
}