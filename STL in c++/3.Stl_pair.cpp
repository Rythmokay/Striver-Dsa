#include <iostream>
#include <utility>
using namespace std;
 
// Driver Code
int main()
{
    // defining a pair
    pair<int, char> PAIR1;
 
    // first part of the pair
    PAIR1.first = 100;
    // second part of the pair
    PAIR1.second = 'G';
 
    cout << PAIR1.first << " ";
    cout << PAIR1.second << endl;
    pair<int , pair<int,int>>R={{1},{2,3}};// pair ke andar pair 
    cout<<R.first<<endl;
    cout<<R.second.first<<endl;
    cout<<R.second.second<<endl;
 
    return 0;
}