#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter the size of the array : " << endl;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int Position;
    cout << "Enter the Position where you wanted to delete a data in array : \n";
    cin >> Position;
    for (int i=Position-1;i<size;i++){
        arr[i]=arr[i+1];
    }
    size--;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}