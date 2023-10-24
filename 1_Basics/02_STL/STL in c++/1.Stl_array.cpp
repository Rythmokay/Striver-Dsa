#include<iostream>
#include <array>
using namespace std;
void printarray(int n, int arr[]){
    for (int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
int main (){
    array<int,4>a={1,2,3,4};

    int size=a.size();
    printarray(4,a.data());
    cout<<a.empty()<<endl;//check whether the array is emppty or not 
    cout<<a.front()<<endl;//print the first element of array
    cout<<a.back()<<endl;//print the second element of array
    cout<<a.at(2)<<endl;// print the element according to the index given 
    
}