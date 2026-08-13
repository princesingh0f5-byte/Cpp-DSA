#include <iostream>
// sum of n natural number
using namespace std;
int main()
{
    int n;
    cout << "Enter number : ";
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << "Sum of no till " << n << " = " << sum;
    return 0;
}