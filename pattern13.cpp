#include <iostream>
using namespace std;
// for quadrilateral there should be atleat difference of 2 between row and col otherwise the program will give traingle 
//      * *
//     * * *
//    * * * *
//   * * * * *
//  * * * * * *
int main()
{
    int row,col;
    cout << "Enter row and col :";
    cin >> row>>col;


    for (int i = 0; i < row; i++)
    {
        for (int j = row; j > i; j--)
        {
            cout << " ";
        }

        for (int j = row - i; j <col; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}