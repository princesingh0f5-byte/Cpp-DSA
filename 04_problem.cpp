#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a print even no till n: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << "\n";
        }
    }
    return 0;
}