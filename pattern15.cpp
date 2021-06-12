#include <iostream>

using namespace std;
//      1
//     2
//    3
//   4
//  5
int main()
{
    int row;
    cout << "Enter row";
    cin >> row;

    for (int i = 1; i <= row; i++)
    {
        for (int j = row; j >= i; j--)
        {
            cout << " ";
        }
        for (int k = i; k >= i; k--)
        {
            cout << k;
        }
        cout << endl;
    }
}