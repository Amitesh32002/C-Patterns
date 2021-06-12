#include <iostream>

using namespace std;
//      1
//     1 1
//    1 2 1
//   1 2 3 1
//  1 2 3 4 1
// 1 2 3 4 5 1
int main()
{
    int row, col;
    cout << "Enter row and col :  ";
    cin >> row >> col;

    for (int i = 1; i < row; i++)
    {

        for (int j = 1; j <= row - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            if (j == 1 || j == i)
            {
                cout << "1 ";
            }
            else
            {
                cout << j << " ";
            }
        }
        cout << endl;
    }

    return 0;
}