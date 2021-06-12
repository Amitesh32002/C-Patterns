#include <iostream>

using namespace std;
//       1
//      21
//     321
//    4321
//   54321
//  654321
int main()
{
    int row;
    cout << "Enter row : ";
    cin >> row;

    for (int i = 1; i <= row; i++)
    {
        for (int j = row; j >= i; j--)
        {
            cout << " ";
        }
        int k = i;
        for (int j = row - i; j < row; j++)
        {
            cout << k--;
        }

        cout << endl;
    }
}