#include <iostream>
using namespace std;
// pass by value
void change(int n); // function prototype

// function definition
void change(int n)
{
    n = n + 10;
    cout << "the value of n in function call is " << n << endl;
}
int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;
    cout << "value of n before function call is " << n << endl;
    change(n);
    cout << "value of n after function call is " << n << endl;
}