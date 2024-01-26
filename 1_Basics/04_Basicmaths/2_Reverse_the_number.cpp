#include<iostream>
#include<limits.h>
using namespace std;
/*
    Time Complexity: O(log | N |)
    Space Complexity: O(1)

    Where 'N' is the input integer.
*/

int reverseInteger(int n)
{
    int result = 0;
    while (n != 0)
    {
        int lastDigit = n % 10;

        // To check overflow.
        if (result > INT_MAX / 10 || result < INT_MIN / 10)
        {
            return -1;
        }
        result = 10 * result + lastDigit;
        n = n / 10;
    }
    return result;
}
int main()
{
    int result = reverseInteger(12345);
    cout << result;
}