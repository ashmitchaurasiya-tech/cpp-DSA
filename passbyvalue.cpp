 //pass by value = copy of argument pass to function.
 
 #include<iostream>
 using namespace std;

 int num(int a,int b){
    return a+b;
 }

 int main(){
    int a=5, b=6;//this a and b will be different than the functions parameter(are not equal)
    cout << num(a,b) << endl;

    cout << a << endl << b <<endl;

    return 0;
 }