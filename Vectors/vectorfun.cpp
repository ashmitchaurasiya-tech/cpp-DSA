#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> vec={1,2,3};
    cout << "size=" << vec.size() << endl;//size of the vector
    vec.push_back(24);//add element at last
    cout << "new_size =" << vec.size() << endl;

    for(int val:vec){
        cout << val << endl;
    }

    vec.pop_back();//del last element
    cout << "new_size =" << vec.size() << endl;
    cout <<  vec.front() << endl;//first value
    cout <<  vec.back() << endl;//last value
    cout <<  vec.at(2) << endl;//bring the choosen index value


    return 0;
}