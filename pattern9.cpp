#include <iostream>

using namespace std;
// *****
//  ****
//   ***
//    **
//     *
int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin >> n;

    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <i; j++)
        {
            cout << " ";
        }

        int star = n - i;
        for (int j = 1; j <=star; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}