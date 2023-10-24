#include <iostream>
using namespace std;
int main()
{
    string s = "Striver";
    cout << s[0];
    cout << s[1];
    cout << s[2];
    cout << s[3];
    cout << s[4];
    cout << s[5];
    cout << s[6];
    int len =s.size();
    cout<<s[len-1];//print the last index(r) negative indexing 
}