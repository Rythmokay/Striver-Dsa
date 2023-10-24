#include<iostream>
using namespace std;
int main (){
    //2D array
    int arr[3][5];
    arr[1][3]=78;
    cout << arr[1][3]<<endl;
    cout << arr[1][2]<<endl;// will print some garbage value because value not given 
    
}