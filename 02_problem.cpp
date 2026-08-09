#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    if (n > 0)
    {
        cout << n << " " << "Postive number";
    }
    else if (n == 0)
    {
        cout << n << " " << "Zero";
    }
    else
    {
        cout << n << " " << "Negative number";
    }
    return 0;
}