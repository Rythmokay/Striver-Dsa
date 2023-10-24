#include<iostream>
using namespace std;
int main (){
    int size ;
    cout<<"Enter the size of the array : "<<endl;
    cin>>size;
    int arr[size];
    for (int i=0;i<size;i++){
        cin>>arr[i];
    }
    int index;
    cout<<"Enter the index where you wanted to insert a data in array : \n";
    cin>>index;
    int element ;
    cout<<"Enter the element Or data you wanted to insert : \n";
    cin>>element;
    for (int i= size -1; i>= index ;i--){
        arr[i+1]=arr[i];
    size+=1;
    }
    arr[index]=element;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
}