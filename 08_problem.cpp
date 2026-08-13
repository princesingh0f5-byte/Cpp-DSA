// factorial
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number : ";
    cin >> n;
    int prod = 1;
    for (int i = 1; i <= n; i++)
    {
        prod *= i;
    }
    cout << n << " factorial is " << prod;
    return 0;
}