#include<iostream>
using namespace std;
int main (){
    int size;
    cout<<"Enter the size of array : \n";
    cin>>size;
    int arr[size];
    for (int i=0;i<size;i++){
        cin>>arr[i];
    }
    int position;int element;int index;
    cout<<"Enter the element you want to insert : \n";
    cin>>element;
    cout<<"Enter the index where you want to insert the element : \n";
    cin>>index;
    for (int i=size-1;i>=index;i--){
        arr[i+1]=arr[i];
        size++;
        }
        arr[index]=element;
    for (int i = 0; i < size; i++)
    {
    cout << arr[i] << " ";
    }
    cout<<"\nEnter the Position of element you want to delete :\n";
    cin>>position;
    for (int i=position-1;i<size;i++){
        arr[i]=arr[i+1];
    }
    size--;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}