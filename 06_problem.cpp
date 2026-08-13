// Calculate power of a number
#include <iostream>
using namespace std;
int main()
{
    int n, pow;
    cout << "Enter number : ";
    cin >> n;
    cout << "Enter power : ";
    cin >> pow;
    int orignal = n;
    for (int i = 1; i < pow; i++)
    {
        orignal *= n;
    }
    cout << n << " Power of " << pow << " = " << orignal;
    return 0;
}