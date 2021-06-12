#include <iostream>

using namespace std;

//     *
//    * *
//   * * *
//  * * * *
// * * * * *
// * * * * *
//  * * * *
//   * * *
//    * *
//     *
int main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        int space = n - i;
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    int k = 6;
    for (int i = 1; i <= k; i++)
    {
        for (int j = 1; j < i; j++)
        {
            cout << " ";
        }

        int star = k - i;
        for (int j = 1; j <= star; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }
}