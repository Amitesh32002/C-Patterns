#include <iostream>
using namespace std;
// # # # # #
// # # # #
// # # #
// # #
// #
int main()
{
    int rows;
    cout << "Enter the Number of rows : " << endl;
    cin >> rows;

    for (int i = 0; i < rows; i++)
    {
        for (int j = rows; j > i; j--)
        {
            cout << "# ";
        }

        cout << endl;
    }
}