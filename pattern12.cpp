#include <iostream>
using namespace std;
//      * * * * *
//     * * * * *
//    * * * * *
//   * * * * *
//  * * * * *
int main()
{
    int row;
    cout << "Enter row  :";
    cin >> row;

   
    for (int i = 0; i < row; i++)
    {
        for (int j = row; j > i; j--)
        {
            cout << " ";
        }
        int col = 2 * row - i;
        for (int j = row - i; j < col ; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}