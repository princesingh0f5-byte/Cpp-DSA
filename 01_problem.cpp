// Odd or Even
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    if (n % 2 == 0)
    {
        cout << n << " " << "Even number";
    }
    else
    {
        cout << n << " " << "Odd number";
    }
    return 0;
}