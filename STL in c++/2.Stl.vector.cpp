#include<iostream>
#include <vector>
using namespace std;
int main (){
    vector<int > v ;
    cout<<"Capacity of the vector is : "<<v.capacity()<<endl;
    cout<<"Size of the vector is : "<<v.size()<<endl;
    v.push_back(1);
    cout<<"Capacity of the vector is : "<<v.capacity()<<endl;
    cout<<"Size of the vector is : "<<v.size()<<endl;
    v.push_back(2);
    cout<<"Capacity of the vector is : "<<v.capacity()<<endl;
    cout<<"Size of the vector is : "<<v.size()<<endl;
    v.push_back(3);
    cout<<"Capacity of the vector is : "<<v.capacity()<<endl;
    cout<<"Size of the vector is : "<<v.size()<<endl;
}